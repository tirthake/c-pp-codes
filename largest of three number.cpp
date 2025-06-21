#include<iostream>
// program to find the largest among three numbers
using namespace std;
int main()
{
int a,b,c,largest;
cout<<"enter 1st number:"<<endl;
cin>>a;
cout<<"enter 2nd number:"<<endl;
cin>>b;
cout<<"enter 3rd number:"<<endl;
cin>>c;


if(a>=b&&a>=c)
    largest=a;
else if(b>=a&&b>=c)
largest=b;
else
    largest=c;

  cout<<"the largest number is:"<<largest<<endl;



    return 0;
}
