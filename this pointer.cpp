#include<iostream>
using namespace std;

class Box {
public:
    // Constructor with static flag to print message only once
    Box(double l = 2.0, double b = 2.0, double h = 2.0) {
        static bool firstCall = true;
        if (firstCall) {
            cout << "Constructor called:" << endl;
            firstCall = false;
        }

        //define dimensions of the box
        length = l;
        breadth = b;
        height = h;
    }


//method to calculate volume
    double volume() {
        return length * breadth * height;
    }


    // Method to compare volumes of two boxes
    int compare(Box box) {
        return this->volume() > box.volume();  // using this pointer to access the current object's volume, it works like this->volume() > box.volume();
    }

private://private members to store dimensions of the box
    double length;
    double breadth;
    double height;
};

int main() {
    Box box1(3.0, 4.0, 5.0);
    Box box2(8.0, 5.0, 4.0);

    if (box1.compare(box2))  // we compare box2 with box1
        cout << "box2 is smaller than box1" << endl;
    else
        cout << "box2 is equal or larger than box1" << endl;

    return 0;
}
// This code demonstrates the use of the `this` pointer to access the current object's members.
// The `compare` method uses `this->volume()` to refer to the volume of the