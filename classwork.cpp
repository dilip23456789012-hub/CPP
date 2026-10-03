#include <iostream>
using namespace std;
class Deque
{
    int front;
    int rear;
    int size;
    int capacity;
    int *arr;

public:
    Deque(int dequeCapacity = 10)
    {
        capacity = dequeCapacity;
        arr = new int[capacity];
        rear = -1;
        front = -1;
        size = 0;
    }

    ~Deque()
    {
        delete[] arr;
    }

    bool isempty()
    {
        return size == 0;
    }
    bool isfull()
    {
        return size == capacity;
    }

    void insertfront(int val)
    {
        if (isfull())
        {
            cout << "Deque is full";
            return;
        }
        if (isempty())
        {
            front = 0;
            rear = 0;
        }
        else if (front == 0)
        {
            front = capacity - 1;
        }
        else
        {
            front--;
        }
        arr[front] = val;
        size++;
    }
};