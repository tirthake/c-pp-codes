#include<iostream>
using namespace std;
int main()
{
    int n,num1=0,num2=1,next;
    cout<<"enter the value of n:"<<endl;
    cin>>n;


 cout<<"fibonacci series upto "<<n<<endl;




 cout<<num1<<" ";

  while(num2<=n)  //upto mean n limit ,not nth , if nth than regular for
{
   cout<<num2<<" ";  //remove endl to show in one line output
   next=num1+num2;
   num1=num2;
   num2=next;
}

    return 0;
}
