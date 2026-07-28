#include <bits/stdc++.h>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Stack implementation
class Stackimp {
public:
    Node* top = NULL;
    int size = 0;

    // Push element
    void push(int x) {
        Node* temp = new Node(x);

        temp->next = top;
        top = temp;

        size++;
    }

    // Remove top element
    void pop() {
        if (top == NULL) {
            cout << "Stack underflow" << endl;
            return;
        }

        Node* temp = top;
        top = top->next;

        delete temp;
        size--;
    }

    // Return top element
    int peek() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return -1;
        }

        return top->data;
    }

    // Return stack size
    int getSize() {
        return size;
    }
};

int main() {
    Stackimp s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;
    cout << "Stack size: " << s.getSize() << endl;

    s.pop();

    cout << "Top after pop: " << s.peek() << endl;
    cout << "Stack size: " << s.getSize() << endl;

    return 0;
}