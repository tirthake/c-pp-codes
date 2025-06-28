#include<iostream>
using namespace std;
int main(){


int n;
    int arr1[10];
    cout<<"enter n:"<<" ";
     cin>>n;


    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }



//print array
cout<<" entered array"<<"="<<" ";
for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }




//bubble sort
for(int j=0;j<n-1;j++)
{

//swap
    for(int i=0;i<n-1 ;i++)
    {
        if(arr1[i]>arr1[i+1])
        {
            int temp=arr1[i];
            arr1[i]=arr1[i+1];
            arr1[i+1]=temp;
        }
    }
}
        
//output sorted array
cout<<"sorted array is:"<<endl;
for(int i=0;i<n;i++){
    cout<<arr1[i]<<endl;
}


    return 0;
}