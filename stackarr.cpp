#include <iostream>
#include <stack>
using namespace std;

class Stack
{
    int *arr;
    int size;
    int topIndex;

public:
    Stack(int val)
    {
        size = val;
        arr = new int[size];
        topIndex = -1;
    }

    void push(int x)
    {
        if (topIndex < size - 1)
        {
            topIndex++;
            arr[topIndex] = x;
        }
    }

    void pop()
    {
        if (topIndex >= 0)
        {
            topIndex--;
        }
    }
    void show()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    return 0;
}
