#include <iostream>
using namespace std;

int main()
{
    int num;
    bool isprime=true;

    cout <<"enter a number:";
    cin >> num;

    if (num<=1)
        {
        isprime=false;
        }
    else if (num== 2)
        {
        isprime= true;
        }
    else {

        for (int i=2;i*i<=num;i++)
           {
            if (num%i==0)
            {
                isprime=false;
                break;
            }
        }
    }

    if (isprime)
        cout << "This number is prime." << endl;
    else
        cout << "This number is not prime." << endl;

    return 0;
}

