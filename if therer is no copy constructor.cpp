#include<iostream>
using namespace std;


class code{
int id;
public:
code(int a)
{
    id = a;}

    code(code &x)
    {

        id=x.id;// Copy constructor
    }

    void display() {
        cout << "ID: " << id << endl;
    }
};

int main()
{
   code A(100);
   code B(A);
   code C = A; // Copy constructor called here

/*code D;
D=A;
*/ //causes overloading operators assignment

   cout<<"\n id of A is: ";
   A.display();
    cout<<"\n id of B is: ";
    B.display();
    cout<<"\n id of C is: ";
    C.display();
  // cout<<"\n id of D is: ";
  //D.display();//
  
   return 0;
}