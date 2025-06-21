#include<iostream>
using namespace std;
int main()
{
    int arr1[11];
    int arr2[11];
    cout<<"enter 10 element of array:"<<endl;

    for(int i=0; i<10; i++)
    {
        cin>>arr1[i];

    }




    cout<<" entered array = "<<" ";
    for(int i=0; i<10; i++)
    {
        cout<<" "<<arr1[i];

    }
    cout<<" "<<endl;


    cout<<" "<<"final array after adding 5 to each element = "<<" ";
    // cout<<endl;
    for(int i=0; i<10; i++)
    {
        {
            arr2[i]=arr1[i]+5;
        }

        cout<<" "<<arr2[i];

    }





    return 0;
}
