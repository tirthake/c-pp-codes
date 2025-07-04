//1st: i need to know the number of building blocks are parfect squier3 or not .
//2nd: we need to check the given integer is a squire  number or not.



#include <iostream>
#include <cmath>
using namespace std;

bool is_square(int n)
{
    int root = sqrt(n);
    return root * root == n;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (is_square(n)) 
    {
        cout << n << " is a perfect square." << endl;
    } else {
        cout << n << " is not a perfect square." << endl;
    }

    return 0;
}


/*




alternative:
#include <cmath>

bool is_square(int n)
{
  return fmod(sqrt(n), 1) == 0;// Check if the square root of n is an integer, here fmod is used to check if the remainder is zero when divided by 1 means the number is a perfect square
                                  cause reminder is zero when the number is a perfect square,but if it is not a perfect square then the reminder will be not zero
}


....or

//return sqrt(n) == floor(sqrt(n)); 

// Check if the square root of n is equal to its floor value, which means n is a perfect square
floor(sqrt(n)) is used to get the **largest integer less than or equal to the square root of n***, if it is equal to the square root of n then it is a perfect square
 otherwise it is not a perfect square.

*/