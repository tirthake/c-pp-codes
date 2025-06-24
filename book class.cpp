#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class book{
private:
    string title;
    string author;
    int page;
    float price;

public://constructor
    book(string t,string a,int p,float pr)
:title(t),author(a),page(p),price(pr){}

//mathod display
void displayinfo()
{
    cout<<"title:"<<title<<"\n"<<"author:"<<author<<"\n"<<"page:"<<page<<"\n"<<"price:"<<fixed<<setprecision(2)<<price<<"\n\n";
}

void applydiscount(float discount)
{
    price-=price*(discount/100);
}

};//end of ----

int main()
{
    book book1( "the greatest gatsby","f.scott",218,10.99f);
    book book2( "1984","geoage",328,1599);

     book book3( "to kill a mokingbard","harper lee",281,12.99f);



     //display
      book1.displayinfo();
      book2.displayinfo();
      book3.displayinfo();


      //applyy discount
      cout<<"after applying discount:"<<"\n";
      book1.applydiscount(10);
      book1.displayinfo();

    return 0;
}
