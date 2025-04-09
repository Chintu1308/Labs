// Accept two stacks as input from the user and perform operations on it using stack class available in Standard Template Library (STL). 

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> stack1, stack2;
    int n1, n2, element;

    // Input for first stack
    cout << "Enter the number of elements in the first stack: ";
    cin >> n1;
    cout << "Enter the elements of the first stack: ";
    for (int i = 0; i < n1; i++) {
        cin >> element;
        stack1.push(element);
    }

    // Input for second stack
    cout << "Enter the number of elements in the second stack: ";
    cin >> n2;
    cout << "Enter the elements of the second stack: ";
    for (int i = 0; i < n2; i++) {
        cin >> element;
        stack2.push(element);
    }

    // Displaying the stacks
    cout << "First Stack: ";
    while (!stack1.empty()) {
        cout << stack1.top() << " ";
        stack1.pop();
    }
    cout << endl;

    cout << "Second Stack: ";
    while (!stack2.empty()) {
        cout << stack2.top() << " ";
        stack2.pop();
    }
    cout << endl;

    return 0;
}