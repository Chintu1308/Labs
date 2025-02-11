// Write a program that demonstrates friend functions, inline functions, 

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    Rectangle(int l, int w) : length(l), width(w) {}
    inline int area() {
        return length * width;
    }
    friend void printDimensions(Rectangle rect);
};

void printDimensions(Rectangle rect) {
    cout << "Length: " << rect.length << ", Width: " << rect.width << endl;
}

int main() {
    int l, w;
    cout << "Enter length and width: ";
    cin >> l >> w;
    Rectangle rect(l, w);
    cout << "Area: " << rect.area() << endl;
    printDimensions(rect);

    return 0;
}