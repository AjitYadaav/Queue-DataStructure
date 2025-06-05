#include<iostream>
#include<stack>
using namespace std;

class Queue{
    stack<int>s1;
    stack<int>s2;
    public : 
    void push(int data){
        //s1->s2 
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        //insert data into s1
        s1.push(data);
        //s2->s1
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        cout<<data<<" is pushed into the queue.\n";
    }

    void pop(){
        s1.pop();
    }

    int front(){
        if(empty()){
            cout<<"Queue is empty, first insert data into the queue.\n";
            return -1;
        }
        return s1.top();
    }

    bool empty(){
        return s1.empty();
    }
};

int main(){
    Queue q;
    q.push(3);
    q.push(5);
    q.push(9);

    //travesing in a queue (print all the element in a queue)
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    
    // 3 5 9
    cout<<q.front();//3
    q.pop();//3 is removed
    cout<<q.front();//now 5 is at the front of the queue
}