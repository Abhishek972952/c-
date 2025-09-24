# include <iostream>
using namespace std;
int main(){
    // int year;
    // cout<<"enter a year";
    // cin>>year;

    // if((year%4==0 && year%100!=0 ) || (year%400==0))
    // {
    //     cout<<"yes";
    // }

    // else if(year%400==0)
    // {
    //     cout<<"century";
    // }

    // else{
    //     cout<<"no";
    // }
   
// meter reading question

    // int unit;
    // cout<<"enter unit";
    // cin>>unit;

    // if(unit>0 && unit<=50) cout<<unit*1;
    // else if(unit>50 && unit<=150) cout<<50*1+(unit-50)*2;
    // else if(unit>150 &&  unit<=250) cout<<50*1+100*2+(unit-150)*3;
    // else if(unit>250) cout<<50*1+100*2+100*3+(unit-250)*4;

// swaping

    // int a=65;
    // int b=41;

    // int temp;

    // temp=a;
    // a=b;
    // a=temp;

    // cout<<a<<b;
    
    // int a=23;
    // int b=34;

    // a=a+b;
    // b=a-b;
    // a=a-b;

    // cout<<a<<b;

//     int option;
//     cout<<"enter a option";
//     cin>>option;

//     if(option==1)
//     {
//         int a=23;
//         int b=45;

//         a=a+b;
//         b=a-b; 
//         a=a-b;
//         cout<<a<<b;
//     }

// else if(option)
// {
//     int a=45;
//     int b=1;
//     int c=34;
//   }

    
// int user;
// cout<<"enter a user";
// cin>>user;

// if(user==1){
//     cout<<"veg";
// }

// else if(user==2){
//     cout<<"non veg";

// }

// else{
//     cout<<"desert";
// }

// int user;
// cout<<"enter a user";
//  cin>>user;
// switch (user){
//     case1:cout<<"veg";
//     case2:cout<<"non veg";
// }
    

// }

// disadvatages-
// position is deafault is no fix
// only two type of data type-int ,char
// opertor are not allowed-&& or not

    
  //lopp
// int i=1;
// while(i<=10);
// {
//     cout<<i++;
// }

// for(int i=1; i<=10;++i )
// {
//     cout<<"2*"<<i<<"="<<2*i<<endl;
    

// }

// int n1=18;
// int n2=7;
// int hcf=0;
// int lcm=0;

// for(int i=n1; ;i=i+n1)
// {
//     if(i%n1==0 && i%n2==0)
//     {
//         cout<<i;
//         break;
//     }
// }


//prime number

// int n=17;
// int count=0;
// for(int i=1;i<=n;++i)
// {
// if(n%i==0)
// {
//     ++count;
// } 
//    }
//    if(count==2)   cout<<"prime";
//    else cout<<"not prime";


//perfact number

// int n=7;
// int sum=0;
// for(int i=1;i<n;++i)
// {
//     if(n%i==0)
// {
// sum=sum+i;
// }

// }

// if(sum==n)  cout<<"perfact";


int n=2;
int power=3;
int ans=0;

for(int i=1;i<power;++i)
{
  ans=ans*n;
}

cout<<ans;


}

  
  








// boiler plate code=it is neccesary code to identify any language by compiler