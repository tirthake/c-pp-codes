#include<iostream>


//program for linear search
using namespace std;
int main()
{
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



//taking value to match
int value;
cout<<"enter value you insert to :"<<" ";
cin>>value;


//3. linear search;
bool found=false;
for(int i=0;i<n;i++)
{
    if(arr1[i]==value)
    {
        found=true;
        break;
    }
}


//output
if(found)
{
    cout<<"value find in array"<<endl;

}
else{
    cout<<"value not found in array"<<endl;
}







    return 0;
}
