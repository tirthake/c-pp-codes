#include<iostream>
using namespace std;
  class this_pointer{

public:
this_pointer add(int a)  // method to add a value to the member variable pass by value

{
this->a=a+a; // using this pointer to access the member variable
cout<<"a: "<<this->a<<endl;
return *this;

}

this_pointer sub(int a) {
this->a=a-a;
cout<<"a: "<<this->a<<endl;
return *this;

}
/*
advantages of using this pointer:
1. It allows you to refer to the current object within a member function.
2. It helps to resolve naming conflicts between member variables and parameters.
3. It can be used to return the current object from a method, enabling method chaining.
4. It provides a way to access member variables and methods of the current object.
5. It can be used to pass the current
*/

private:
int a;


  };

   int main()


   {
this_pointer A;
A.add(5).sub(10);
return 0;

   }