
#include<iostream>
using namespace std;
int main()
{

    int num,rest,tempo,sum=0;
    cout<<"enter a number:"<<" ";
    cin>>num;



//same as reverse
    tempo=num;
    while(tempo!=0)
    {
        rest=tempo%10;
        sum=sum*10+rest;
        tempo=tempo/10;

    }

   //if sum and given number are equal than its palindrome
    if(sum==num)
    {
        cout<<num<<" is a palindrome"<<endl;

    }

    else
        cout<<num<<" is not a palindrome"<<endl;

    return 0;
}
