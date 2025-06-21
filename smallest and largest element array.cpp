#include<iostream>
using namespace std;
int main()
//------------------taking input
{
    int arr1[11];
    cout<<"enter 10 element of array:"<<endl;
    for(int i=0; i<10; i++)
    {
        cin>>arr1[i];

    }



    //------------maximum by let index 0 as max initiallly
    int max=arr1[0];
    for(int i=0; i<10; i++)
    {
        if(arr1[i]>max)//compare index i to index 0
        {
            max=arr1[i];
        }
    }

    cout<<"largest element:"<<max<<endl;

//-----------------------same but opposite for minimum
    int min=arr1[0];
    for(int i=0; i<10; i++)
    {
        if(arr1[i]<min)
        {
            min=arr1[i];
        }
    }

    cout<<"smallest element:"<<min<<endl;



    return 0;
}
