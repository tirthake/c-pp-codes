#include<iostream>
using namespace std;
int main()
{
    int num,multi;
   cout<<"enter a number:"<<" ";
   cin>>num;


   cout<<"multiplication table of "<< num <<":"<<endl;

   for(int i=1;i<=10;i++)
   {
       multi=num*i;
       cout<<num<<"*"<<i<<"="<<multi<<endl;
   }



    return 0;
}
