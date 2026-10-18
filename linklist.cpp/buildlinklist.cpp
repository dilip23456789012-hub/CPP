#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int data){
       this->data=data;
       next=nullptr;
    }
};
class Linklist{
    public:
     Node*head;
    Linklist(){
        head =nullptr;
    }
    void buildlist(int value){
         Node*newNode=new Node(value);
         if(head == nullptr){
            head =newNode;
              return ;
         }

         else{
               Node*temp=head;
               while(temp->next != nullptr){
                temp=temp->next;
               }
               temp->next=newNode;
         }

    }
    void display(){
        Node*temp=head;
        while(temp != nullptr){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        
    }
    
};



int main() {
    Linklist l1;
    l1.buildlist(1);
    l1.buildlist(2);
    l1.buildlist(3);
    l1.buildlist(4);
    l1.buildlist(5);

   l1.display();
    return 0;
}

