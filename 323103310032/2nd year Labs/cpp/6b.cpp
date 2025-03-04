//  Write a program to create an array of objects.

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student() {}

    Student(string n, int a) : name(n), age(a) {}

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

void displayStudents(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        students[i].display();
    }
}

int main() {
    const int SIZE = 8;
    Student students[SIZE] = { 
        {"Charan", 19}, {"Bharat", 20}, {"Tarun", 18},
        {"Praveen", 20}, {"Akhil", 19}, {"Chandu", 18}, 
        {"Babasree", 20}, {"Ramaraju", 18}
    };

    cout << "Student List:\n";
    displayStudents(students, SIZE); 
    return 0;
}