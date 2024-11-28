/*
Instructions
- Create a programs that prints 
"Hello, world" to the console.
- Create another program to print variable to console
_ Create another program to call function that prints hello world to console
- Include single line comment 
explaining what is happening
*/

#include<iostream>

void hello() {
    std::cout << "Hello, world"; // this function prints hello world to console
}

int main() {
    hello(); // this calls hello() function
    return 0;
}