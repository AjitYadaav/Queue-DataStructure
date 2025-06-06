#include<bits/stdc++.h>
using namespace std;

void reverseQueue(queue<int>&q){
    stack<int>st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    //now st -> q
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
}

//print the queue
void print(queue<int>&q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}

int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    reverseQueue(q);
    
    cout<<"\nQueue after reversed: ";
    print(q);

    return 0;
}