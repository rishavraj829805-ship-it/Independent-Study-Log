#include <iostream>

using namespace std;

int main(){
    int n1;
    int n2;
//    double n3;

/* Here we want to display our first string before taking the first input but if the user
   enters two numbers separated by any whitespace character then it automatically gets stored in n2 
   as it's suppose to but it'll not print the second string before taking the second input cause it's already assigned so the program ends but it's not how we expected */

    cout << "Enter the first integer :";
    cin >> n1;
    cout << "Enter the second integer :";
    cin >> n2;
    cout << "You entered " << n1 << " and " << n2 << endl;

    // Maybe a better way to take more than one input is

    cout << "Enter two numbers separated by spaces :";
    cin >> n1 >> n2;

    cout << "You entered " << n1 << " and " << n2 << endl;

    return 0;
}