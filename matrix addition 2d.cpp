#include<iostream>
using namespace std;
int main()
{
//----------declare and initialization
    int arr1[100][100];
    int arr2[100][100];
    int arr3[100][100];
    int row,column;
    cout<<"enter row of matrix:"<<endl;
    cin>>row;
    cout<<"enter column of matrix:"<<endl;
    cin>>column;


//--------------------------------------------


    cout<<"enter the value of arr1"<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            cout<<"arr1["<<i<<"]["<<j<<"]="<<endl;
            cin>>arr1[i][j];
        }
    }






//----------------------------------



    cout<<"enter the value of arr2"<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {

            cout<<"arr2["<<i<<"]["<<j<<"]="<<endl;
            cin>>arr2[i][j];
        }
    }


//---------show entered matrix
    cout<<" matrix1:"<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            cout<<arr1[i][j]<<" ";

        }
        cout<<endl;
    }






//---------show entered matrix
    cout<<" matrix2:"<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            cout<<arr2[i][j]<<" ";

        }
        cout<<endl;
    }

//-------add 2 matrix------------
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }

    }
//-----------------------------------------------------
    cout<<"matrix after addition"<<endl;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}

