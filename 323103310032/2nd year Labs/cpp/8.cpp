// Write a Program to demonstrate user defined exceptions

#include <iostream>
#include <exception>

class MyException : public std::exception {
public:
    const char* what() const noexcept override {
        return "User-defined exception occurred!";
    }
};

int main() {
    try {
        throw MyException();
    } catch (const MyException &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}