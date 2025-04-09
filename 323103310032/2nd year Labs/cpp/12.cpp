//Write a program implementing a queue class with required operations using STL. 

#include <iostream>
#include <queue>
using namespace std;

class Queue
{
    queue<int> q;

public:
    void push(int x)
    {
        q.push(x);
    }

    void pop()
    {
        if (q.empty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        q.pop();
    }

    int front()
    {
        if (q.empty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return q.front();
    }

    int back()
    {
        if (q.empty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return q.back();
    }

    int size()
    {
        return q.size();
    }

    bool empty()
    {
        return q.empty();
    }
};

int main()
{
    Queue q;
    int x, n;
    cout << "1. Push\n2. Pop\n3. Front\n4. Back\n5. Size\n6. Exit" << endl;
    while(1){
        cout << "Enter your choice: ";
        cin >> x;
        switch (x)
        {
    case 1:
        cout << "Enter the element to push: ";
        cin >> n;
        q.push(n);
        break;

    case 2:
        q.pop();
        break;

    case 3:
        cout << "Front element: " << q.front() << endl;
        break;

    case 4:
        cout << "Back element: " << q.back() << endl;
        break;
    
    case 5:
        cout << "Size of queue: " << q.size() << endl;
        break;

    case 6:
        exit(0);
    
    default:
        break;
    }
}
    return 0;
}