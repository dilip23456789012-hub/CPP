// #include <iostream>
// using namespace std;
// class MyQueue{
//     private:
//     int arr[100];
//     int front;
//     int rear;;

// public:
//     MyQueue() {
//         front = -1;
//         rear = -1;
//     }
//     void enqueue(int value){
//         if(rear == 99){
//             cout<<"Queue is full:"<<endl;
//             return;
//         }
//         rear++;
//         if (front == -1) {
//             front = 0;
//         }
//         arr[rear]= value;
//     }
//     void dequeue(){
//         if(front == -1 || front>rear){
//             cout<<"Queue is empty:"<<endl;
//             return;
//         }
//         front++;
//         if(front > rear){
//             front = -1;
//             rear = -1;
//         }
//     }
//     void display(){
//         if(front == -1|| front>rear){
//             cout<<"queue is empty\n";
//             return ;
//         }
//         for(int i=front;i<=rear;i++){
//             cout<<arr[i]<<" ";
//         }
//     }
// };
// int main(){
//      MyQueue q;
//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     q.enqueue(40);
//     q.enqueue(50);
//     q.enqueue(60);
//     cout<<"The array is:";
//    q.display();
//    q.dequeue();
//    return 0;


// }
#include <iostream>
using namespace std;

class MyQueue {
private:
    int arr[100];
    int front;
    int rear;

public:
    MyQueue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int value) {
        if (rear == 99) {
            cout << "Queue is full" << endl;
            return;
        }

        rear++;

        if (front == -1) {
            front = 0;
        }

        arr[rear] = value;
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty" << endl;
            return;
        }

        front++;
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty" << endl;
            return;
        }

        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main() {

    MyQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);

    cout << "The queue is: ";
    q.display();

    q.dequeue();

    cout << "After dequeue: ";
    q.display();

    return 0;
}
