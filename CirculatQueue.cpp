#include<bits/stdc++.h>
using namespace std;

class Queue{
    int *arr;
    int capacity;
    int currSize;
    int f,r;
    public:
    Queue(int capacity){
        this->capacity = capacity;
        arr = new int[capacity];
        currSize = 0;
        f = r = -1;
    }

    void push(int data){
        if(currSize == capacity) {
            cout<<"queue is FULL \ n"<<endl;
            return ;
        }
        r = (r+1)%capacity;
        arr[r] = data;
        currSize++;
    }

    void pop(){
        if(empty()){

        }
    }

    int front(){
        if(empty()){

        }
        return arr[f];
    }

    bool empty(){

    }
}



int main(){

}