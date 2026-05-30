import { useEffect, useState, useRef } from "react";
import { supabase } from "./supabase";
import VideoCall from "./VideoCall";

function App() {
  const [email, setEmail] = useState("");
const [password, setPassword] = useState("");
  const [session, setSession] = useState(null);
const [image, setImage] = useState(null);
  const [message, setMessage] = useState("");
  const [chat, setChat] = useState([]);
  const [room, setRoom] = useState(
  localStorage.getItem("room") || ""
);
  const [typingUser, setTypingUser] = useState("");
  const [videoCall, setVideoCall] = useState(false);
  useEffect(() => {

  supabase.auth.getSession().then(({ data: { session } }) => {
    setSession(session);
  });

  const {
    data: { subscription },
  } = supabase.auth.onAuthStateChange((_event, session) => {
    setSession(session);
  });

  return () => subscription.unsubscribe();

}, []);
  const bottomRef = useRef(null);
 async function getMessages() {

  const { data, error } = await supabase
    .from("messages")
    .select("*")
.eq("room", room);

  console.log(data);
  console.log(error);

  if (data) {
    setChat(data);
  }
}

  useEffect(() => {

  getMessages();

  const channel = supabase
    .channel('messages-channel')

    .on(
      'postgres_changes',
      {
        event: 'INSERT',
        schema: 'public',
        table: 'messages',
        filter: `room=eq.${room}`,
      },
      (payload) => {

        setChat((prev) => [...prev, payload.new]);

      }
    )

    .subscribe();

  return () => {
    supabase.removeChannel(channel);
  };

}, [room,session]);
useEffect(() => {
    if (!session) return;
  console.log("Typing channel created");
  const typingChannel = supabase
    .channel("typing-channel")
     
    .on(
      "postgres_changes",
      {
        event: "*",
        schema: "public",
        table: "typing_status",
      },
      (payload) => {

        const data = payload.new;
       console.log("SESSION STATE =", session);
console.log("APP EMAIL =", session?.user?.email);
console.log("PAYLOAD =", payload);
        console.log("Typing payload:", data);
        if (
       session &&
      data.room === room &&
      data.email !== session?.user?.email &&
      data.typing
       ) {
        setTypingUser(`${data.email} is typing...`);
      } else {
          setTypingUser("");
       }

      }
    )

    .subscribe((status) => {
  console.log("Typing status:", status);
});

  return () => {
    supabase.removeChannel(typingChannel);
  };

}, [room]);

useEffect(() => {

  bottomRef.current?.scrollIntoView({
    behavior: "smooth"
  });

}, [chat]);
   
  async function handleTyping(value) {

  setMessage(value);

  await supabase
    .from("typing_status")
    .delete()
    .eq("email", session?.user?.email);

  await supabase
    .from("typing_status")
    .insert([
      {
        email: session?.user?.email,
        room: room,
        typing: value.length > 0,
      },
    ]);

}
async function sendImage(file) {

  if (!file || room.trim() === "") return;

  const fileName = `${Date.now()}-${file.name}`;

  const { error } = await supabase.storage
    .from("chat-images")
    .upload(fileName, file);

  if (error) {
    console.log(error);
    return;
  }

  const { data } = supabase.storage
    .from("chat-images")
    .getPublicUrl(fileName);

  await supabase.from("messages").insert([
    {
      text: data.publicUrl,
      sender: session?.user?.email,
      room: room,
    },
  ]);
}
  async function sendMessage() {

    if (message.trim() === "") return;
    if(room.trim() === "") return;

    await supabase.from("messages").insert([
      {
        text: message,
        sender: session?.user?.email,
        room: room,
      },
    ]);

    setMessage("");
  }

  if (!session) {

  async function signUp() {

    const { error } = await supabase.auth.signUp({
      email,
      password,
    });

    if (error) {
      alert(error.message);
    } else {
      alert("Signup successful!");
    }
  }

  async function signIn() {

    const { error } = await supabase.auth.signInWithPassword({
      email,
      password,
    });

    if (error) {
      alert(error.message);
    }
  }

  return (
    <div style={{
      height:"100vh",
      display:"flex",
      justifyContent:"center",
      alignItems:"center",
      background:"#000"
    }}>

      <div style={{
        width:"350px",
        background:"#111",
        padding:"30px",
        borderRadius:"20px",
        display:"flex",
        flexDirection:"column",
        gap:"15px"
      }}>

        <h1 style={{
          color:"white",
          textAlign:"center"
        }}>
          Future Hearts 💜
        </h1>

        <input
          placeholder="Email"
          value={email}
          onChange={(e)=>setEmail(e.target.value)}
        
          style={{
            padding:"15px",
            borderRadius:"10px",
            border:"none"
          }}
        />

        <input
          type="password"
          placeholder="Password"
          value={password}
          onChange={(e)=>setPassword(e.target.value)}
          
          style={{
            padding:"15px",
            borderRadius:"10px",
            border:"none"
          }}
        />

        <button
          onClick={signUp}
          style={{
            padding:"15px",
            background:"#ec4899",
            color:"white",
            border:"none",
            borderRadius:"10px"
          }}
        >
          Sign Up
        </button>

        <button
          onClick={signIn}
          style={{
            padding:"15px",
            background:"#3b82f6",
            color:"white",
            border:"none",
            borderRadius:"10px"
          }}
          >
        
          Login
        </button>

      </div>

    </div>
  );
}

  
  return (
    <div style={{
      height: "100vh",
      background: "linear-gradient(to bottom right,#1a002b,#000000,#3b003b)",
      display: "flex",
      justifyContent: "center",
      alignItems: "center",
      color: "white",
      fontFamily: "sans-serif"
    }}>

      <div style={{
        width: "85%",
        maxWidth: "700px",
        height: "85vh",
        background: "rgba(255,255,255,0.08)",
        borderRadius: "30px",
        padding: "20px",
        display: "flex",
        flexDirection: "column",
        backdropFilter: "blur(10px)",
        border: "1px solid rgba(255,255,255,0.1)"
      }}>

        <h1>💜 Future Hearts Chat</h1>
        <input
  value={room}
  onChange={(e) => {
  setRoom(e.target.value);
  localStorage.setItem("room", e.target.value);
}}
   
  placeholder="Enter Couple Room"
  style={{
    padding:"12px",
    borderRadius:"12px",
    border:"none",
    marginBottom:"10px",
    background:"rgba(255,255,255,0.1)",
    color:"white"
  }}
/>
<div style={{
  color:"white",
  fontSize:"14px",
  marginBottom:"10px",
  opacity:0.7
}}>
  {typingUser}
</div>
        <button
  onClick={() => supabase.auth.signOut()}
  style={{
    padding:"10px",
    border:"none",
    borderRadius:"10px",
    background:"#ef4444",
    color:"white",
    marginBottom:"10px",
    cursor:"pointer"
  }}
>
  Logout
</button>

  <button
  onClick={() =>
    window.open(
      `/video?room=${encodeURIComponent(room)}`,
      "_blank"
    )
  }
  style={{
    padding:"10px",
    border:"none",
    borderRadius:"10px",
    background:"#22c55e",
    color:"white",
    marginBottom:"10px",
    cursor:"pointer"
  }}
>
  Start Video Call 🎥
</button>

        <div style={{
          flex:1,
          marginTop:"20px",
          overflowY:"auto",
          display:"flex",
          flexDirection:"column",
          gap:"15px"
        }}>
         
          {chat.map((msg) => (

            <div
              key={msg.id}
              style={{
                background:
                  msg.sender === session?.user?.email
                    ? "#f74ab7"
                    : "#5091f9",

                padding:"15px",
                borderRadius:"20px",
                width:"fit-content",
                maxWidth:"70%",
                alignSelf:
                  msg.sender === session?.user?.email
                  
                    ? "flex-end"
                    : "flex-start"
              }}
            >
              {msg.text.startsWith("http") ? (
  <img
    src={msg.text}
    alt="chat"
    style={{
      maxWidth: "250px",
      borderRadius: "10px"
    }}
  />
) : (
  msg.text
)}
            </div>

          ))}
          <div ref={bottomRef}></div>

        </div>

        <div style={{
          display:"flex",
          gap:"10px",
          marginTop:"20px"
        }}>

          <input
            value={message}
            onChange={(e)=>handleTyping(e.target.value)}
            onKeyDown={(e) => {
  if (e.key === "Enter") {
    e.preventDefault();
    sendMessage();
  }
}}
            placeholder="Whisper across the stars..."
            style={{
              flex:1,
              padding:"15px",
              borderRadius:"15px",
              border:"none",
              outline:"none",
              background:"rgba(17, 53, 13, 0.45)",
              color:"white"
            }}
          />

          <button
            onClick={sendMessage}
            style={{
              padding:"15px 25px",
              borderRadius:"15px",
              border:"none",
              background:"#71bdbd",
              color:"white",
              fontWeight:"bold",
              cursor:"pointer"
            }}
          >
            <input
  type="file"
  accept="image/*"
  onChange={(e) => {
    const file = e.target.files[0];
    sendImage(file);
  }}
/>
            Send 💌
          </button>

        </div>

      </div>

    </div>
  );
}

export default App;