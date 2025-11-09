#include <iostream>

using namespace std;

int main(){
    int favNum;

//  (flush) is used to flush the buffered data into the console this identifier is good for debugging
// endl identifier flushes the data by default and also creates a new line

    cout << "What's your favorite number :" << flush;
    cin >> favNum;
    cout << "Amazing!! That's my favorite number too !!" << endl;

    return 0;
}