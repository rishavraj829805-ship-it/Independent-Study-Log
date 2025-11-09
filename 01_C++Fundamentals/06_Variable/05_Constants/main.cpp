#include <iostream>

using namespace std;

int main(){

    cout << "Hello welcome to Rishav's Carpet Cleaning Services" << endl;
    cout << "\nHow many rooms would you like cleaned :";

    int numberOfRooms {0};
    cin >> numberOfRooms;

    const double pricePerRoom {32.5};
    const double taxRate {0.06};
    const int estimateExpiry {30}; //Days

    double cost = (pricePerRoom * numberOfRooms);
    double tax = (cost * taxRate);
    double estimate = (cost + tax);

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Numbers of rooms :" << numberOfRooms << endl;
    cout << "Price per room : $" << pricePerRoom << endl;
    cout << "Cost : $" << cost << endl;
    cout << "Tax : $" << tax << endl;
    cout << "===================================" << endl;
    cout << "Total estimate : $" << estimate << endl;
    cout << "This estimate is valid for " << estimateExpiry << " days" << endl;
    
    cout << endl;

    return 0;
}