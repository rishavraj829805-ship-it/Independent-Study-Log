#include <iostream>

using namespace std;

int main(){

    cout << endl;

    cout << "           Frank's Carpet Cleaning Serivice" << endl;
    cout << "===========================================================" << endl;

    cout << "Charges:" << endl;
    const double smallRoomCharge {25};
    cout << "$" << smallRoomCharge << " per small room" << endl;
    const double largeRoomCharge {35};
    cout << "$" << largeRoomCharge << " per large room" << endl;
    const double taxRate {0.06};
    cout << "Sales tax rate is " << (taxRate * 100) << "%" << endl;
    const int estimateValidity {30};

    cout << endl;

    cout << "How many small rooms would you like to be cleaned :";
    int numberOfSmallRooms {0};
    cin >> numberOfSmallRooms;
    cout << "How many large rooms would you like to be cleaned :";
    int numberOfLargeRooms {0};
    cin >> numberOfLargeRooms;

    cout << endl;

    cout << "Estimate for carpet cleaning srvice:" << endl;
    cout << "Number of small rooms :" << numberOfSmallRooms << endl;
    cout << "Number of large rooms :" << numberOfLargeRooms << endl;
    cout << "Price per small room :$" << smallRoomCharge << endl;
    cout << "Price per large room :$" << largeRoomCharge << endl;

    double cost = ((numberOfSmallRooms * smallRoomCharge) + (numberOfLargeRooms * largeRoomCharge));
    cout << "Cost :$" << cost << endl;
    double tax = (cost * taxRate);
    cout << "Tax :$" << tax << endl;

    cout << endl;

    cout << "===========================================================" << endl;

    cout << endl;

    double totalEstimate = (cost + tax);
    cout << "Total estimate :$" << totalEstimate << endl;
    cout << "This estimate is valid for " << estimateValidity << " days" << endl;

    cout << endl;

    return 0;
}