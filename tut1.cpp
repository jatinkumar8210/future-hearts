/*  #include <iostream>
using namespace std;
int main(){

    int i ;
    cin>>i;
    for ( int k=0;k<i;k++){
    for (int j=0; j<i;j++){
        cout<<"*";
        
    } cout <<endl;
}
    
    cout<<"hello world";
    return 0 ; 
    
}     */

 /* #include <iostream>
 using namespace std;
   int main(){
    int i;
    cin>>i;

    for (int j=0;j<i;j++){
        for (int k=0; k<=j;k++){
            cout<<"*";
        }
        cout<<endl;
        }
    
    cout<<"hello babe";
    return 0;
   } */


/*    #include <iostream> 
   using namespace std;
   int main(){
    int i; 
    cin>>i;
    for (int j=0; j<i; j++){
        for (int k=i;k>j;k--){
            cout<<"*";


        } 
        cout<<endl;}
    return 0;


   } */

  /*  #include <iostream>
   using namespace std; 
   int  main(){
    int i;
    cin>>i;
     int  p= i ;
    for (int j=0; j<i; j++){

        for(int k=1; k<p; k++){
            cout<<" "; }

        for(int k=0;k<=j; k++){
                cout<<"* ";
    }
    
            cout<<endl;
        p--;
        }
        
    
    cout << "hello baby";
    return 0;

   } */


//    reverse pyramid 
/* #include <iostream> 
using namespace std; 
int main(){
    int i;
    cin>>i;
        int  p= i ;
    for (int j=0; j<i;j++){

         for (int k=0;k<j;k++){
            cout<<" ";
         }

         for (int k=p;k>0;k--){
            cout<<"* ";
            }
           p--;
            cout<<endl;

       
       
    }
} 
 */

//  diamond shape 
/* 
#include <iostream>
using namespace std; 
int main(){
    int i;
    cin>>i;
    for (int j=0; j<i; j++){
        for (int k=0; k<i-j;k++){
            cout<<" ";

        }
        for (int k=0; k<=j; k++){
            cout<<"* ";
        }
cout<<endl;

    }
for (int n=0; n<i; n++){
    for (int m=0;m<=n;m++){
        cout<<" ";
    }
    for (int m=0; m<i-n; m++){
        cout<<"* ";
    }
    cout<<endl;
}
return 0;

    } */



    // hollow square pattern
/* 
    #include <iostream> 
    using namespace std;
    int main(){
        int i;
    cin>>i;
    for  (int j=0; j<i;j++){
        for (int k=0; k<i;k++){
            if ( j==0|| j==i-1|| k==0 ||k==i-1){
                cout<<"* ";
            }
            else{cout<<"  ";}
        
            }
            cout<<endl;
        }

        return 0;
    } */

// hollow diamond pattern


/* #include <iostream>
using namespace std; 
int main(){
    int i;
    cin>>i;
    for (int j=0; j<i; j++){
        for (int k=0; k<i-j-1;k++){
            cout<<" ";

        }
        for (int k=0; k<=j; k++){
            if (k==0|| k==j){
            cout<<"* ";}
            else {cout<<"  ";}
        }
cout<<endl;

    }
for (int n=0; n<i; n++){
    for (int m=0;m<n;m++){
        cout<<" ";
    }
    for (int m=0; m<i-n; m++){
         if (m==0|| m==i-n-1){
            cout<<"* ";}
            else {cout<<"  ";}
    }
    cout<<endl;
}
return 0;

    } 
 */


//  pattern 1

/* #include <iostream> 
using namespace std; 
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n;i++){
        for (int j=1; j<=n;j++){
            cout<<j<<" ";


        }
        cout<<endl;
    }
    return 0;
}
 */

 /* #include <iostream> 
using namespace std; 
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n;i++){
        for (int j=1; j<=n;j++){
            cout<<n-j+1<<" ";


        }
        cout<<endl;
    }
    return 0;
}
 */
    

/*  #include <iostream> 
 using namespace std;
 int main(){
     int n ; 
     cin>>n; 
     int row=1;
    int count=1;
     while (row<=n){
        int col=1;
        while (col<=n){
            cout<<count<<" ";
            col++;
            count++;
            
        }
        cout<<endl;
        row++;
     }
     return 0 ;

 } */
/* 
 #include <iostream> 
 using namespace std; 
 int main(){
    int n; 
    cin>>n;
     int row=1; 
    while(row<=n){
        int col=1;

        int value = row;

        while (col<=row){
            cout<<value<<" ";
            value++;
            col++;
            
        }
        row++;
        cout<<endl;

    }
  return 0;} */

  /* #include <iostream> 
  using namespace std;
  int main(){
    int n;
     cin>>n; 
     int row =1;
     while (row<=n){
        int col=1; 
        while (col<=row){
            cout<<row-col+1<<" ";
            col++; 
        }
        cout<<endl;
        row++;
     }

return 0;
  }
  */
/* 
  #include <iostream> 
  using namespace std;
  int main(){
    int n;
     cin>>n; 
     int row=1;
     char ch= 'A'; 
      while(row<=n){
        int col=1;
     
         while (col<=n){
             char start = ch+col+row-2;
            cout<<start<<" ";
            col++;
         }
         
         row++;
         cout<<endl;
      }
      return 0 ;
  } */

/* #include <iostream> 
using namespace std;
int main(){
    int n;
    cin>>n;
    int row =1;
    char ch= 'A';
    char start = ch;
    while (row<=n){
        int col=1;
        while (col<=row){
            char value = ch+row+col-2;
            cout<<value <<" ";
            col++;
        }
        row++;
       
        cout<<endl;
    }
    return 0;
} */
/* #include <iostream> 
using namespace std;
int main(){
    int n;
    cin>>n;
    int row =1;
    char ch= 'A';
    char start = ch;
    while (row<=n){
        int col=1;
        while (col<=row){
            char value = ch+n-row+col-1;
            cout<<value <<" ";
            col++;
        }
        row++;
       
        cout<<endl;
    }
    return 0;
} */


/* 
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n-row){
            cout<<" ";
            col++;
        }
        int col2=1;
        while(col2<=row){
            cout<<"*";
            col2++;
        }
       
     row++;
    cout<<endl;
    }
    return 0;
} */
/* 
#include <iostream>
using namespace std; 
int main(){
    int n ;
    cin>>n;
    int row=1;
     while(row<=n){
        int col=1;
        while (col<=n-row){
            cout<<" ";
            col++;
        }
        int col2=1;
        while (col2<=row){
            cout<<col2;
            col2++;
        }
        int col3 =1 ;
        while(col3<=row-1){
            int value = row- col3;
            cout<<value;
            col3++;
        }


    cout<<endl;
     row++;
     }
     return 0 ;
} */
/* 
/* 
#include <iostream> 
using namespace std;
 int main(){
    int n ; 
    cin>>n;
    int  row = 1 ;
    while(row<=n){
        int col1=1;
        while (col1<=n-row+1){
            cout<<col1<<" ";
            col1++;
        }
         int col2=1;
         while (col2<row){
            cout<<"* ";
            col2++;
         }

         int col3=1;
         while (col3<row){
            cout<<"* ";
            col3++;
         }
         int col4=1 ;
         while (col4<=n-row+1){
            int value =  n-col4+1;
            cout<<value<<" ";
            col4++;
         }

     cout<<endl;
    row++;}
    return 0 ;

 } */


 /* #include <iostream>
using namespace std;
int main(){
 int n; 
 cin>>n;
 int a=0;
 int b=1;
cout<<a<<endl;
cout<<b<<endl;
 for ( int i=0; i <= n ; i++){

     int sum = a+b ;
   a=b;
   b=sum;
    cout<<sum;
    
    
    cout<<endl;
 } 


    return 0 ; 

} */


/* #include <iostream>
using  namespace std;
int main(){
    int n ;
     cin>>n;
      int value =0;
     for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"not prime ";
            value=1;
            break; 
        } 
    
    }
    if(value==0){
        cout<<"is prime ";
    }

     return 0 ;

} */
//  decimal to binary
/*  #include <iostream>
using namespace std;
int main(){
    int n ; 
    cin>>n;
    string d1=" ";
    while(n!=0){
        int rem= n%2;
        n=n/2;
       d1= d1+ char(rem+'0');
      
    }
     cout<<d1<<endl;
      string rev=" ";
      for(int i = d1.length()-1; i>=0; i--){
        rev = rev + d1[i];
      }
      cout<<rev;
    
   
    }  */

/*  #include <iostream> 
using namespace std;
int main(){
    int n;
    cin>>n;
    int d1=0;
    while(n!=0){
        int bit = (n&1);
    
       
         d1= (d1*10 ) + bit;

         cout<<bit;
          n=n>>1;
    }
     cout<<endl;
      cout<<d1 ;
      int rev=0;
      while(d1!=0){
         int rem=d1%10;
         rev = (rev*10)+ rem;
         d1=d1/10;
      }
      cout<<endl;
      cout<<"rev:"<<rev; 
    

}  */


// binary to decimal  
/* 
 #include <iostream> 
 #include <math.h>
 using  namespace std;
  int main(){
       int n;
    cin>>n;
    int digit = 0;
    int i=0;
    while(n!=0){
        int bit = n%10;

        digit = digit+bit*pow(2,i);
        n=n/10;
        i++;
        
    }
    cout<<digit;

    return 0 ;
  } */
/* 
  #include <iostream>
  #include  <math.h>
  using namespace std; 
  int main(){
    int n ;
    cin>>n;
    int m=n;
    int mask=0;
    int i =0;
    if (n==0){cout<<1; return 0;}
    while(n!=0){
        mask = ((mask<<1)|1);
        i++;
        n= n>>1;


    }
    cout<<mask<<endl;
   
    int c = (~m)&mask;
    cout<<c;
    

  } */

/*   #include  <iostream>
  using namespace std;
  int main(){
    int  n ;
    cin>>n;
    if (n==0) { cout<<0;
    return 0;}
    while(n%2==0 ){
        n=n/2;
        if (n==1) break;

    }
    if (n==1){
        cout<<"true";
    }
    else{cout<<"false";}

  } */

 /*  #include <iostream> 
  using namespace std;
   int main(){
    int n;
    cin>>n;
    if (n==0){
        cout<<"false";
        return false;
    }
    if (( n &(n-1))==0){
        cout<<"true";
        return true ;
    }
    else  cout<<"false"; return false;

     
   } */

/*    #include <iostream>
   using namespace std;
   int main(){
    int n = 1;
    switch(n){
        case 1: cout<<"jatin";
        // break;
        case 2: cout<<"chhavi my love";
         break;
         case 3: cout<< "i love you";
         break;
         case 4: cout<<"you and me";
        //  break;
         default: cout<<"we love each other";
    }
    return 0;
   } */

 /*   #include <iostream> 
   using namespace std; 
   int main(){
     char cal;
      do{
    cout<<"enter a"<<endl;
    int a;
    cin>>a;
     cout<<"enter b"<<endl;
    int b ;
    cin>>b ;
    cout<<"operation +,-,*,/ "<<endl;
    char opr ;
    cin>>opr;
    switch (opr) {
        case '+': cout<< "sum:"<<a+b<<endl;
        break;
        case '-': cout<<"sub:"<<a-b<<endl;
        break;
        case '*': cout<<"mul:"<<a*b<<endl;
        break;
        case '/': cout<<"div:"<<a/b<<endl;
        break;
        default: cout<<"invalid opr"<<endl;

    } 
    cout<<"want more cal (y or n) "<<endl;
   
     cin>>cal;

       } while(cal=='y'|| cal=='Y');
    return 0 ;
   } */

/*    #include <iostream>
   using namespace std;

   int factorial(int n ){
     int fact =1;
     for(int i =1; i<=n; i++){
        fact = fact*i;
     }
     return fact;   }
   

    int nCr(int n, int r){

    int ans = (factorial(n))/(factorial(r)*factorial(n-r));
    return ans;
   }

   int main(){
    int n,r;
    cin>>n>>r;
    cout<<endl;
    cout<<nCr(n,r);
   } */


/*    #include <iostream> 
   using namespace std;

   bool isprime(int n){
    for( int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
        return 1;
       
   }}

   int main(){
    int n ;
    cin>>n;
    if (isprime(n)==0){
        cout<<"it is not prime";
    }
    else{
        cout<<"it is prime no.";}
 
} */

/* #include <iostream>
using namespace std; 
int main(){
    int n;
    cin>>n;
    int ans= (3*n)+7;
    cout<<"ans:"<<ans;
} */
/* 
#include <iostream>
using namespace std;
int  bitno(int n){
    int value = 0;
    while(n!=0){
        int bit = (n&1);
        if(bit==1){
            value++;
        }
        n=n>>1;
    }
    return value;
}
int main(){
    int a,b ;
    cin>>a>>b;
    int a1 = bitno(a);
    int b1 = bitno(b);
    cout<< "total no. of bit in both digit is:"<<a1+b1;

 
} */

/* #include <iostream>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int a=0;
    int b=1;
    int sum=0;
    if (n==0){
    cout<<a<<endl;}
    if (n==1){
    cout<<b<<endl;}
    for (int i=3;i<=n;i++){
        sum= a+b;
        //cout <<sum<<endl;
        a=b;
        b=sum;
        if (i==(n)){
            cout<<sum<<endl;
        }

    }

} */

/* #include <iostream>
#include <climits>
using namespace std; 

int getmin( int arr[],int n){
    int mini = INT_MAX;
    for (int i=0;i<n;i++){
        mini=min(mini,arr[i]);
        // if(min>arr[i]){
        //     min=arr[i];
         
        
    }
    cout<<mini;
} 
int getmax( int arr[],int n){
    int max = INT_MIN;
    for (int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        
    }
    cout<<max;
}
int  main(){
    int n ;
    cin>>n;
    int arr[20];
    for (int i =0; i<n;i++){
        cin>>arr[i];
    }

    for (int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
  cout<<endl;
    cout<<endl;
      cout<<endl; 

    getmax(arr,n);
    cout<<endl;
    getmin(arr,n);
    
} */

   

/* #include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num[10];
    for(int i =0; i<n;i++){
        cin>>num[i];
    }
    cout<<endl;

    int sum =0;
    for (int i=0 ; i<n;i++){
        sum=sum+num[i];
    }
    cout<<"total sum of element in array:"<<sum;
} */
/* #include <iostream>
using namespace std;
// function to found target
bool linears(int arr[],int n, int target){
    for(int i=0;i<n;i++){
        if (target == arr[i]){
            cout<<"got it"<<endl;
            return 1;
        }
    }
    cout<<"not found";
    return 0;     
}



int main(){
      int arr[10]= {1,2,3,0,-4,64,23,87,21,-45};
      int n = sizeof(arr)/sizeof(arr[0]);
    //   cout<<n;
    cout<<"enter your target"<<endl;
    int t;
    cin>>t;
      linears(arr,n,t);
 return 0;
} */
/* #include <iostream>
using namespace std;

int main(){
    int arr[5]= {1,2,3,4,5};
    int arr1[5]={0};
    for (int i =0; i<5;i++){
         arr1[i]=arr[4-i];
    }

    for (int i=0;i<5;i++){
        cout<<arr1[i]<<"";
    }
    cout<<endl;
    for (int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

return 0;
} */


/* #include <iostream>
using namespace std;
void printarr(int arr[],int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void reversearr(int arr[],int n){
    int start = 0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

 int main(){
    int arr1[6]={1,34,-5,44,-67,34};
    int arr2[5]={43,64,-6,423,3};
     
    reversearr(arr1,6);
    cout<<endl;
    reversearr(arr2,5);
    cout<<endl;

    printarr(arr1, 6);
    cout<<endl;
    printarr(arr2, 5);



return 0;
} */

// swap alternate no. of array
/* #include <iostream>
using namespace std;
void printarr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void  swapalt(int arr[], int n){
    int first =0;
    int next=1;
    while(first<(n-1)||next<(n-1)){
        swap(arr[first],arr[next]);
        first=first+2;
        next=next+2;
    }
}
int main(){
    int arr[6]= {1,2,3,4,5,6};
    printarr(arr,6);
    cout<<endl;
    swapalt(arr, 6);
    cout<<endl;
    printarr(arr,6);



return 0;
} */

/* #include <iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for (int i=0; i<5;i++){
       cout<<arr[i]<<" ";
    }
    int ans =0;
    for (int i =0;i<5;i++){
        ans=ans^arr[i];
    }
    cout<<ans;

return 0;
} */

#include <iostream>
using namespace std;
int main(){
    int arr[6]={1,2,3,4,5,3};
    int arr1[6]={1,2,2,3,3,4,};
    int t;
    for (int i=0; i<6;i++){
        for(int j=0;j<6;j++){
            t=
            
    }





return 0;
}