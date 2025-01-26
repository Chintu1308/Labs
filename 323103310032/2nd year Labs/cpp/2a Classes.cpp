// Write a program Illustrating Class Declarations, Definition, and Accessing Class Members

#include <iostream>
using namespace std;
class Employee
{
public:
    string name;
    double salary;
    void display()
    {
        cout << "Name: " << name << endl
             << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e1;
    cout << "Enter name: ";
    cin >> e1.name;
    cout << "Enter salary: ";
    cin >> e1.salary;
    e1.display();
    return 0;
}