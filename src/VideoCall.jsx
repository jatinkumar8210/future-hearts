import { ZegoUIKitPrebuilt } from '@zegocloud/zego-uikit-prebuilt';

export default function VideoCall({ room }) {

  const myMeeting = async (element) => {

    const appID = 1739099166;

    const serverSecret = "4b5355628ec2ac45879ae56d3013ffb2";

    const kitToken = ZegoUIKitPrebuilt.generateKitTokenForTest(
      appID,
      serverSecret,
      room,
      Date.now().toString(),
      "Future Hearts User"
    );

    const zp = ZegoUIKitPrebuilt.create(kitToken);

    zp.joinRoom({
      container: element,
      sharedLinks: [
        {
          name: 'Personal link',
          url:
            window.location.protocol +
            '//' +
            window.location.host +
            window.location.pathname +
            '?roomID=' +
            room,
        },
      ],
      scenario: {
        mode: ZegoUIKitPrebuilt.OneONoneCall,
      },
    });
  };

  return (
    <div
      ref={myMeeting}
      style={{ width: '100vw', height: '100vh' }}
    />
  );
}