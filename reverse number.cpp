//program to reverse a number

#include<iostream>
using namespace std;
int main()
{

    int num,rest,tempo,sum=0;
    cout<<"enter a number:"<<" ";
    cin>>num;




    tempo=num;
    while(tempo!=0)
    {
        rest=tempo%10;
        sum=sum*10+rest;
        tempo=tempo/10;

    }
        cout<<" the reversd number is :"<<sum<<endl;



    return 0;
}
