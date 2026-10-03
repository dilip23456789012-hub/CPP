#include <iostream>
#include <stack>
using namespace std;
 class Queue{
     stack<int>s1,s2;
     public:
       void enqueue(int x){
        s1.push(x);
       }
       void dequeue(){
        if(s1.empty() && s2.empty() ){
            cout<<"Queue is empty";
        } if(s2.empty()){
            while(!s1.empty()){
           s2.push(s1.top());
           s1.pop();
            }
            cout<<"deleted:"<<s2.top()<<endl;
            s2.pop();
        }
          
       }
       void display(){
          if(s2.empty() && s1.empty()){
               cout<<"Queue is empty";
          }
          if(s2.empty()){
            while(!s1.empty()){
           s2.push(s1.top());
           s1.pop();
            }
        }
        cout<<"front:"<<s2.top()<<endl;
          
        
       }
 };

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();
    q.dequeue();
    q.dequeue();
    return 0;

	

}
