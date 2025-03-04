// Write a program which uses the concept of pass and return objects to functions.

#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, width;
    Rectangle(int l, int w) : length(l), width(w) {}
    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

Rectangle modifyRectangle(Rectangle r) {
    r.length += 10;
    r.width += 10;
    return r;
}

int main() {
    Rectangle rect1(10, 20);
    cout << "Original: ";
    rect1.display();
    Rectangle rect2 = modifyRectangle(rect1);
    cout << "Modified: ";
    rect2.display();
    return 0;
}