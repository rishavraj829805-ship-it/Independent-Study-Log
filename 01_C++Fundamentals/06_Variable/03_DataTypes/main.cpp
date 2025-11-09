#include <iostream>

using namespace std;

int main(){

    short n1 {12};
    cout << "size of n1 is " << sizeof(n1) << endl;

    int n2 {12};
    cout << "size of n2 is " << sizeof(n2) << endl;

    long int n3 {12};
    cout << "size of n3 is " << sizeof(n3) << endl;

    long double n4 {12.5};
    cout << "size of n4 is " << sizeof(n4) << endl;

    return 0;
}