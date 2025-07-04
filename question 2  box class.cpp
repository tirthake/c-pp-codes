#include<iostream>
#include<string>
using namespace std;

class BOX {
private:
    double length;
    double width;
    double height;
public:
    BOX(double l, double w, double h)
        : length(l), width(w), height(h) {}

    friend void printDimensions(const BOX& box);
    friend class BoxVolumeCalculator;

    void displayVolume();
};

void printDimensions(const BOX& box) {
    cout<<"\n";
    cout << "Length: " << box.length << endl;
    cout << "Width: " << box.width << endl;
    cout << "Height: " << box.height << endl;
    cout<<"\n";
}

class BoxVolumeCalculator {
public:
    double calculateVolume(const BOX& box) {
        return box.length * box.width * box.height;
    }
};



void BOX::displayVolume() 

{
    BoxVolumeCalculator calc;
    double volume = calc.calculateVolume(*this);   // this refers to the current object
   
    cout << "Volume of the box: " << volume << endl;
}



int main() {
    BOX box(9.0, 6.6, 5.9);
     printDimensions(box);
     box.displayVolume();

    BOX box2(3.0, 4.0, 5.0); 
    printDimensions(box2); 
    box2.displayVolume(); 
    return 0;
}