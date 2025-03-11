// Write a program that handles Exceptions. Use a Try Block to Throw it and a Catch Block to Handle it Properly

#include <iostream>

int main() {
    try {
        int a = 10, b = 0;
        if (b == 0) {
            throw std::runtime_error("Division by zero error");
        }
        std::cout << "Result: " << (a / b) << std::endl;
    } catch (const std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}