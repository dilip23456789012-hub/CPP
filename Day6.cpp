#include <iostream>
using namespace std;
class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;
    public: CircularQueue(int n){
        arr=new int[size];
        rear=-1;
        front=-1;
        size=n;
    }
    void enqueue(int value){
      if((rear+1)%size ==front){
        cout<<"Queue is full";
         return ;
      }
       if(front == -1){
        rear =0;
        front=0;
       }
       else{
        rear =(rear+1)%front;
       }
       arr[rear]=value;
    }
    void dequeue(){
        if(front == -1){
            cout<<"Queue is full"<<endl;
        }
      
            cout<<"Deleted element:"<<arr[front];
        if(front == rear){
           rear=-1;
           front=-1;
        }
        else{
            front =(front%1)%size;
        }
    }
    void display(){
        if(front == -1 ){
            cout<<"queue is empty";
            return ;
        }
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    CircularQueue q(5);
    q.enqueue(10);
     q.enqueue(20);
      q.enqueue(30);
       q.enqueue(40);
        q.enqueue(50);
     q.display();
     q.dequeue();
     q.dequeue();
     q.display();
  return 0;
}