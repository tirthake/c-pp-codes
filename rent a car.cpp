#include<iostream>
using namespace std;

int rental_car_cost(int day) {
    int daycost = 40;
    int total = daycost * day;
    if(day >= 7) {
        total = total - 50;
    } else if(day >= 3) {
        total = total - 20;
    }
    return total;
}

int main() {
    int day;
    cout << "Enter number of days: ";
    cin >> day;
    int total = rental_car_cost(day);
    cout << "Total amount = " << total << endl;
    return 0;
}