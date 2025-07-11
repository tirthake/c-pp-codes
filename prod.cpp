#include <bits/stdc++.h>
using namespace std;

using ull = unsigned long long;    //TO HANDLE LARGE FIBBONACCI NUMBER
//WORKS WITH ONLY POSITIVE NUMBERS
class ProdFib{
public:
static vector <ull> productFib(ull prod)

{
    ull a=0,b=1;//These will represent consecutive Fibonacci numbers F(n) and F(n+1)
    //MAIN LOOP
    while(a*b<prod)
    {
        ull next=a+b;
    a=b;
    b=next;
    }
      return{a,b,a*b==prod?1ULL:0ULL};
          /*1ULL (true equivalent) if product matches exactly

          0ULL (false equivalent) if product exceeds target*/
}

};


 int main()
{
    ull prod;
    cin>>prod;
    vector <ull> v=ProdFib::productFib(prod);
    cout<<v[0]<<" "<<v[1]<<" "<<v[2];
    return 0;
}