#include <iostream>
using namespace std;



bool checkForFactor(int base, int factor)
{
    return (factor != 0 && base % factor == 0); // Check if factor is not zero and if it divides base evenly
    // If factor is zero, it cannot be a factor of any number, hence return false
    // If base % factor equals zero, it means factor is a factor of base, hence return true
    // If base % factor does not equal zero, it means factor is not a factor of base, hence return false
}

 int main()
 {   int base, factor;
   cout << "Enter the base number: ";
   cin >> base;
   cout << "Enter the factor number: ";
   cin >> factor;

   bool result = checkForFactor(base, factor);// Call the function to check if factor is a factor of base
   if(result) {
       cout << factor << " is a factor of " << base << endl;
   } else
    {
       cout << factor << " is not a factor of " << base << endl;
   }

   return 0;
 }