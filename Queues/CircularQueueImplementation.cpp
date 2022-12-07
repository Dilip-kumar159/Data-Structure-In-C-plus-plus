#include<iostream>

using namespace std;

// Circular Queue implementation TC -> O(1) and SC -> O(1)

class CircularQueue{

    public:
            int * arr;
            int front, rear, size;

        // Constructor
        CircularQueue(int n){
            size = n;
            arr = new int[size];
            front = rear = -1;
        }

        // Enqueue or Push_back
        void enqueue(int value){

            // check whether the Queue is full or not
            if((rear + 1) % size == front){
                cout<<"Queue is Full"<<endl;
                return;
            }

            if(front == -1) front = 0;

            rear = (rear + 1) % size;

            arr[rear] = value; 
        }

        // Dequeue or pop_front

       int dequeue(){
         // Check whether the Queue is empty or not
         if(front == -1) return -1;

         // Store the poppped element
         int res = arr[front];

         // Check whether there is single element or not
         if(front == rear) front = rear = -1;

         else front = (front + 1) % size;

         return res;
       }

       // Check whether the Queue is Empty or not
       bool isEmpty(){

        if(front == -1) return true;

        return false;
       }
      
        // Check whether the Queue is Full or not
       bool isFull(){

        if((rear + 1) % size == front) return true;

        return false;
       }

       // Get the front value
       int Front(){

        if(isEmpty()) return -1;

        return arr[front];
       }

       // Get the Rear Value
       int Rear(){

        if(isEmpty()) return -1;

        return arr[rear];
       }
};


int main(){

    CircularQueue q(3);
    q.enqueue(2);
    q.enqueue(5);
    q.enqueue(3);

    cout<<"Front value -> "<<q.Front()<<endl;

    cout<<"Rear value -> "<<q.Rear()<<endl;

    if(q.isEmpty()) cout<<"Queue is Empty"<<endl;

    else cout<<"Queue is Not Empty"<<endl;

    if(q.isFull()) cout<<"Queue is Full"<<endl;
    
    else cout<<"Queue is Not Full"<<endl;

    cout<<"Popped Element -> "<<q.dequeue()<<endl;
    cout<<"Popped Element -> "<<q.dequeue()<<endl;
    cout<<"Popped Element -> "<<q.dequeue()<<endl;

    cout<<"Front value -> "<<q.Front()<<endl;

    if(q.isEmpty()) cout<<"Queue is Empty"<<endl;

    else cout<<"Queue is Not Empty"<<endl;

    if(q.isFull()) cout<<"Queue is Full"<<endl;
    
    else cout<<"Queue is Not Full"<<endl;

    return 0;
}