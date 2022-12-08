#include<iostream>

using namespace std;

class Deque{

    public : 

    int * arr;
    int front , rear, size;

    Deque(int k){
        size = k;
        arr = new int[size];
        front = rear = -1;
    }

    void push_front(int val){

        // if Deque is full
        if(isFull()) {
            cout<<"Deque is full"<<endl;
            return;
        }

        // single element
       else if(front == -1) front = rear = 0;

       // To maintain the Cyclic nature
       else if(front == 0) front = size - 1;

       else front--;

       arr[front] = val;

    }

    void push_back(int val){
        
        // if deque is full
        if(isFull()) {
            cout<<"Deque is full"<<endl;
            return;
        }

        // if there is no element in the queue bascially empty element
        if(front == -1) front = 0;

        // To maintain the Cyclic nature
        rear = (rear + 1) % size;

        arr[rear] = val;

    }

    int pop_front(){

        // Check whether the queue is empty or not
        if(isEmpty()) return -1;

        int ans = arr[front];

         if(front == rear) front = rear = -1;

        // To check the cyclic nature
        else front = (front + 1) % size;

        return ans;
    }

    int pop_back(){

        // Check whether the queue is empty or not
        if(isEmpty()) return -1;

        int ans = arr[front];

        if(front == rear) front = rear = -1;

        // To Check cylic nature
        else if(rear == 0) rear = size - 1;

        else rear--;

        return ans;
    }

    int Front(){

        if(isEmpty()) return -1;

        return arr[front];

    }

    int Rear(){

        if(isEmpty()) return -1;

        return arr[rear];
    }

    bool isEmpty(){
        if(front == -1) return true;

        return false;
    }

    bool isFull(){
            if((rear + 1) % size == front) return true;
            return false;
    }
};

int main(){

    Deque dq(4);

    dq.push_back(10);
    dq.push_back(20);

    cout<<"Front value -> "<<dq.Front()<<endl;
    cout<<"Rear value -> "<<dq.Rear()<<endl;

    dq.push_front(30);
    dq.push_front(89);

    cout<<"Front value -> "<<dq.Front()<<endl;
    cout<<"Rear value -> "<<dq.Rear()<<endl;

    cout<<"Popped Element -> "<<dq.pop_front()<<endl;

    cout<<"Front value -> "<<dq.Front()<<endl;
    cout<<"Rear value -> "<<dq.Rear()<<endl;

    dq.push_back(9);

    cout<<"Front value -> "<<dq.Front()<<endl;
    cout<<"Rear value -> "<<dq.Rear()<<endl;

    return 0;
}