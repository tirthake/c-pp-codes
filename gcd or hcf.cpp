#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"enter the 2 numbers:"<<endl;
    cin>>num1>>num2;

    if(num1<=0||num2<=0)
    {
        cout<<"only positive number can input"<<endl;
        return 1;
    }




    while(num1!=num2)
    {
        if(num1>num2)
        {
            num1=num1-num2;
        }
        else
        {
            num2=num2-num1;
        }
    }
    cout<<"gcd="<<num1<<endl;

    return 0;
}
