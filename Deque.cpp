#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>deq;
    deq.push_front(1);
    deq.push_back(2);
    deq.push_front(3);

    // so final deque has 3 1 2 as a elements 

    cout<<deq.front();//3
    cout<<deq.back();//2
    cout<<deq.empty();//false(0)

    deq.pop_back();//2 is removed from deque
    deq.pop_front();//3 is removed from the deque
}