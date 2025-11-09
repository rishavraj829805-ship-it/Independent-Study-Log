#include <iostream>

// This line stats that the x isn't availble in the main.o (the object file)
extern int x;

int main(){

    std::cout << "Hello World" << std::endl;

    std::cout << x;

    return 0;
}

// So what happens here is cause the source code has no syntax error the code compiled successfully but we explicitly told that the x isn't the part of the main object file that will be created by the compiler and when we hit the execute to execute the program the cout function searches for x to print it to the console but since we declared that x isn't part of the main object file and we know that it isn't a part of the <iostream> library too so it causes a linker error not a compiler error cause the source code got compiled just fine