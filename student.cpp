#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class student
{
private:
    string name;
    int rollno;
    int marks[5];
    float totalmarks;


//constractor
public:
    student(string n,int r,int m[5],float t=0)
        :name(n),rollno(r),totalmarks(t)
    {

        for(int i=0; i<5; i++)
        {
            marks[i]=m[i];
            totalmarks+=marks[i];
        }
    }


//mathod display
    void displayinfo()
    {

        cout<<"name:"<<name<<"\n"<<"Roll no:"<<rollno<<"\n"<<"marks:";
        for(int i=0; i<5; i++)
        {
            cout<<marks[i]<<" ";
        }
        cout<<"\n totalmarks:"<<totalmarks<<endl;
    }

};




int main()
{
    int studentMarks[5]= {10,20,30,40,50}; //initialize marks array
    student student1("tirtha",412,studentMarks);//create student obj

    //display
    student1.displayinfo();




    return 0;
}























