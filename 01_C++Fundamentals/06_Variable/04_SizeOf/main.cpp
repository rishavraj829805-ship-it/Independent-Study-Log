#include <iostream>
#include <climits>

using std::cout;
using std::cin;
using std::endl;

int main(){

//  NEW INFORMATION :- we can use the sizeof like this too
    cout << "Int : " << sizeof(int) << endl;
    cout << "short Int : " << sizeof(short int) << endl;
    cout << "long Int : " << sizeof(long int) << endl << endl;

    cout << "float : " << sizeof(float) << endl;
    cout << "double : " << sizeof(double) << endl;
    cout << "long double : " << sizeof(long double) << endl << endl;

    cout << "Int Min : " << INT_MIN << endl;
    cout << "Int Max : " << INT_MAX << endl;
    cout << "Long Int Min : " << LONG_MIN << endl;
    cout << "Long Int Max : " << LONG_MAX << endl;
    cout << "Long Long Int Max : " << LLONG_MAX << endl;
    cout << "Char Min : " << CHAR_MIN << endl;
    cout << "Char Max : " << CHAR_MAX << endl << endl;

    return 0;
}