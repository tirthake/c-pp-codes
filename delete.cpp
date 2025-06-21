#include<iostream>
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



/*//taking value and position from user
int value;
cout<<"enter value you insert to :"<<" ";
cin>>value;
*/

int pos;
cout<<"entered position to delete:(0-"<<n<<"):"<<" ";
cin>>pos;




//delete
for(int i=pos;i<n;i++)
{
    arr1[i]=arr1[i+1];
}
//arr1[pos]=value;//fixed
n--;//fixed


for(int i=0;i<n;i++)
{
    cout<<arr1[i]<<endl;

}



    return 0;
}
