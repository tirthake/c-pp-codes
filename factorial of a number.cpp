#include<iostream>
using namespace std;
int main()
{
    int i,fact=1,n;
    cout<<"enter  number:"<<endl;
    cin>>n;





    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    cout<<"factorial of "<< n <<" is: "<<fact<<endl;
    return 0;
}


