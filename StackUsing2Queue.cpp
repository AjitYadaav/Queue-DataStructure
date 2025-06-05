#include<queue>
#include<iostream>
using namespace std;

class Stack{
    queue<int>q1;
    queue<int>q2;
    public:
    void push(int data){
        //q1 -> q2
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        //add data into the q1
        q1.push(data);
        //q2->q1 
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        cout<<data<< " is pushed into the stack.\n";
    }

    void pop(){
        //just pop the front of q1
        q1.pop();
    }
    int top(){
        return q1.front();
    }

    bool empty(){
        return q1.empty();
    }

};

int main(){
    Stack st;
    st.push(2);
    st.push(4);

    //traversing the stack 
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    st.push(40);
    
    cout<<"\nis stack empty? "<< st.empty()<<endl;

    return 0;
}