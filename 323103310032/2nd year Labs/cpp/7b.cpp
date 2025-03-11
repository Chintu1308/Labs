// Write a Program to Demonstrate the Catching of All Exceptions

#include <iostream>
#include <stdexcept>

int main() {
    try {
        throw "An unknown error occurred";
    } catch (const std::runtime_error& e) {
        std::cout << "Runtime error caught: " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "Out of range error caught: " << e.what() << std::endl;
    } catch (const char* msg) {
        std::cout << "Exception caught: " << msg << std::endl;
    } catch (...) {
        std::cout << "Exception caught: An unknown error occurred" << std::endl;
    }
    return 0;
}