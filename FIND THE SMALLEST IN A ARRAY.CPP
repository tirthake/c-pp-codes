#include <vector>
#include<iostream>
using namespace std; 
// This function finds the smallest number in an array of integers
int findSmallest(vector <int> list)
{
   int min = list.front(); // Initialize min with the first element of the list, same as end to access last element
   for (auto i: list) // Iterate through each element in the list   *** need to learn tirtha**
   {
     if (i < min)
       min = i;
   }
  return min;
}
// This function finds the smallest number in an array of integers

 int main()
{
    vector <int> list = {5, 3, 8, 1, 4}; // Initialize a vector with some integers
    int smallest = findSmallest(list); // Call the function to find the smallest number
    cout << "The smallest number in the array is: " << smallest << endl; // Output the result
    return 0;}