#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    int priority;
    Node *next;

    Node(int val, int p)
    {
        data = val;
        priority = p;
        next = nullptr;
    }
};
class pq
{
    Node *front;

public:
    pq()
    {
        front = nullptr;
    }
    void enqueue(int val, int p)
    {
        Node *head = new Node(val, p);
        if (front == nullptr)
        {
            front = head;
            return;
        }
        else if (p > front->priority)
        {
            head->next = front;
            front = head;
            return ;
        }
        else{
            Node*temp=front;
            while(temp->next !=nullptr && temp->next->priority >= head-> priority){
                temp=temp->next;
            }
            head->next=temp->next;
            temp->next= head;
            return ;
        }
    }
    void dequeue(){
        if(front == nullptr){
          cout<<"queue is not empty";
        }
        Node*temp=front;
        while()


    }
};
