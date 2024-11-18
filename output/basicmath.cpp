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
int times(int a, int b) {
    return a * b;
}

int main() {
    a = 3;
    b = 4;

    std::cout << sum(a, b) << std::endl; // prints sum to console
    std::cout << times(a, b) << std::endl;
    return 0;
}