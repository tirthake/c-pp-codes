#include<iostream>
using namespace std;
int main()
{

    int num,last,sum=0;
    cout<<"enter number:"<<"  ";
    cin>>num;

 while(num!=0)
 {

     last=num%10;
     sum+=last;
     num=num/10;
 }

cout<<"sum of digits is "<<sum;

    return 0;
}
