#include<iostream>

using namespace std;

class Queue{
    public:

    int *arr;
    int front, rear, size, n;

    Queue(){
        // constructor
        size = 10001;
        arr = new int[size];      
        front = 0;
        rear  = 0;
        n = 0;
    }

    bool isEmpty(){
        if(front == rear) return true;

        else return false;
    }
    void enQueue(int x){

        if(rear == size){
           return;
        }else{
            arr[rear] = x;
            rear++;
            n++;
        }
    }

    int deQueue(){

        if(isEmpty()){
            return -1;
        }else{
            int popEle = arr[front];
            arr[front] = -1;
            front++;
            n--;

            if(front == rear){
                front = 0;
                rear = 0;
            }
            return popEle;
        }
    }

    int frontElement(){
        if(isEmpty()) return -1;

        return arr[front];
    }

    int rearElement(){
        if(isEmpty()) return -1;

        return arr[rear-1];
    }

    int queueSize(){

        if(isEmpty()) return 0;

        return n;
    }
};

int main(){

    Queue q;
    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(50);
    q.enQueue(30);

    cout<<"Size of the Queue -> "<< q.queueSize()<<endl;

    int fronts = q.frontElement();
    cout<<"Front Element -> "<<fronts<<endl;

    int back = q.rearElement();
    cout<<"Back Element -> "<<back<<endl;

    int pop = q.deQueue();
    cout<<"Removed Element -> "<<pop<<endl;

    int pop1 = q.deQueue();
    cout<<"Removed Element -> "<<pop1<<endl;

    cout<<"Size of the Queue -> "<< q.queueSize()<<endl;

    int front = q.frontElement();
    cout<<"Front Element -> "<<front<<endl;

    int backs = q.rearElement();
    cout<<"Back Element -> "<<backs<<endl;

    int pop2 = q.deQueue();
    cout<<"Removed Element -> "<<pop2<<endl;

    cout<<"Size of the Queue -> "<< q.queueSize()<<endl;

    int remove = q.deQueue();

    if(q.isEmpty()) cout<<"Queue is Empty"<<endl;

    else cout<<"Queue is not Empty"<<endl;

    return 0;
}