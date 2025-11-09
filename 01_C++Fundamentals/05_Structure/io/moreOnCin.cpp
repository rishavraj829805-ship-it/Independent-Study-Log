#include <iostream>

int main(){
    int n1 = 0;
    double n2 = 0;

    /*Here when we enter a double as the first input for example (10.5) the compiler will trim off the integer part from it and assign it to n1 as the n1 variable is an integer type then the rest of part (0.5)will be stored in the buffer so there's value in the buffer and there is n2 which requires a double value then it will get assigned to n2 and the program will be further executed witout asking for another input from the user!!*/
    std::cout << "Enter two numbers separated using space :" <<std::flush;
    std::cin >> n1 >> n2;
    std::cout << "You entered " << n1 << " and " << n2 << std::endl;

    return 0;
}