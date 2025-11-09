#include <iostream>

int main(){
    // Here is also a syntax error as we missplled endl with an extra 'l' which the compiler doesn't understand
    std::cout << "Hello World!" << std::endll;

    return 0;
}