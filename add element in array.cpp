#include<iostream>
using namespace std;
//-------------------------------------------------------------
// Function to insert 'x' at 'pos' in the array
void insertX(int &n, int arr[], int x, int pos)
{
    for (int i = n; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = x;
    n++; // Increase array size
}



//-------------------------------------------------------------
int main()
{
    int arr[100];


    int n;// Initial size = 10
    cout<<"enter initial value of n :(max100):"<<endl;
    cin>>n;

    cout << "Enter "<<n<<" elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
//---------------------------------------------------------------


    // 2. Ask for insertion details (all in one phase)
    int numInsert;
    cout << "\nHow many insertions? ";
    cin >> numInsert;

    int positions[numInsert], values[numInsert];

    cout << "Enter " << numInsert << " positions (0-" << n << "): ";
    for (int i = 0; i < numInsert; i++)
        cin >> positions[i];

    cout << "Enter " << numInsert << " values to insert: ";
    for (int i = 0; i < numInsert; i++)
        cin >> values[i];
//------------------------------------------------------------------------



    // 3. Perform insertions (from right to left to avoid overlapping shifts)
    for (int i = numInsert - 1; i >= 0; i--)
    {
        if (positions[i] < 0 || positions[i] > n)
        {
            cout << "Skipping invalid position: " << positions[i] << endl;
            continue;
        }
        insertX(n, arr, values[i], positions[i]);
    }
//----------------------------------------------------------------------------


    // 4. Display final array
    cout << "\nFinal array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
