#include <iostream>

int main(){

    int favoriteNumber;

    // Here we tried to print an uninitialized variable so it generates a warning cause by default if we don't initialize a value to a variable it stores any random garbage value into it
    std::cout << favoriteNumber << std::endl;
    return 0;
}