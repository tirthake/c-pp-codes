#include <iostream>
using namespace std;



inline int square(int num) { 
    return num* num;
}
int main(){

    int num = 10; 
    cout << "The square of " << num << " is: " << square(num) << endl; // here num is passed as an argument to the inline function square
    // The inline function square is called, and it returns the square of num
    return 0;
}