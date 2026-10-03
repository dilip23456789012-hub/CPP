<<<<<<< HEAD
#include <iostream>
using namespace std;

class Stack {
    int *arr;
    int top, size;

public:
    Stack() {
        size = 2;
        arr = new int[size];
        top = -1;
    }

    void push(int x) {
        if (top == size - 1) {
            int *temp = new int[size * 2];
            for (int i = 0; i < size; i++)
                temp[i] = arr[i];

            delete[] arr;
            arr = temp;
            size *= 2;
        }
        arr[++top] = x;
    }

    void pop() {
        if (top == -1)
            cout << "Underflow\n";
        else
            top--;
    }

    void display() {
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    s.display();
=======
#include <iostream>
using namespace std;

class Stack {
    int *arr;
    int top, size;

public:
    Stack() {
        size = 2;
        arr = new int[size];
        top = -1;
    }

    void push(int x) {
        if (top == size - 1) {
            int *temp = new int[size * 2];
            for (int i = 0; i < size; i++)
                temp[i] = arr[i];

            delete[] arr;
            arr = temp;
            size *= 2;
        }
        arr[++top] = x;
    }

    void pop() {
        if (top == -1)
            cout << "Underflow\n";
        else
            top--;
    }

    void display() {
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    s.display();
>>>>>>> 1036f05e70a8c9c1c5133b930195512d493c1507
}