/*
Instructions:
- create function to perform basic math 
- add comments where necessary 
*/

#include <iostream>

int a, b;

// this function returns the sums of inputs
int sum(int a, int b) {
    return a + b;
}

// this function returns the product of inputs
int times(int a, int b) {
    return a * b;
}

// this function returns the quotient of inputs
double divide(double a, double b) {
    return a / b;
}

int main() {
    a = 3;
    b = 4;

    std::cout << sum(a, b) << std::endl; // prints sum to console
    std::cout << times(a, b) << std::endl; // prints product to console
    std::cout << divide(a, b) << std::endl; // prints quotient to console
    return 0;
}