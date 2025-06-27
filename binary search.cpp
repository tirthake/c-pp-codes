#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    int arr[10];
    cout<<"how many element you want in array:(1-10)"<<endl;
    cin>>n;
    cout<<" enter an element of arr:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin >>arr[i];
    }


    //show array
    cout<<"your enterd array:\n";
    for(int i=0; i<n; i++)
    {
        cout<<" "<< arr[i];
    }




//binary searech
    int value;
    cout<<"\n enter a value to search in array:";
    cin>>value;

    int start=0;
    int end=n-1;
    bool found = false;//initially

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == value)
        {
            cout << "Value found at index " << mid << endl;
            found = true;
            break;
        }
        else if (arr[mid] < value)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }




    if (!found)
    {
        cout << "Value not found in the array" << endl;
    }




    return 0;
}


