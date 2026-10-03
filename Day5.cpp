#include <iostream>
using namespace std;
  
class Queue{
    int *arr;
    int front;
    int rear;
    int size;
    public: Queue(int n){
        rear=-1;
        front=-1;
        size=n;
        arr=new int[size]; 
    }
    void enqueue(int value){
        if(rear == size-1){
        cout<<"queue is overflow"<<endl;  
        return ;      
    }
        if(front == -1){
            front =0;
        }
        rear++;
        arr[rear]=value;
    }
    void dequeue(){
        if(front == -1|| front>rear){
              cout<<"Queue is empty"<<endl;
              return ;
        }
       cout<<"delelted:"<<arr[front]<<endl;
       front++;
    }
    void display(){
         if(front == -1|| front>rear){
            cout<<"Queue is empty"<<endl;
         }
         for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
         }
         cout<<endl;
    }

};
int main(){
    Queue q(5);
    cout<<"The queue is:";
     q.enqueue(10);
     q.enqueue(20);
     q.enqueue(30);
     q.enqueue(40);
     q.enqueue(50);
     q.display();
      cout<<"After deletion:";
     q.dequeue();
     q.dequeue();
    
     q.display();
     return 0;
}