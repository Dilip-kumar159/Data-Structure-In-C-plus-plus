#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int d){
        data = d;
        next = NULL;
    }
};

class QueueLink{
    public:
    Node* front;
    Node* rear;
    int size;

    QueueLink(){
        front = rear = NULL;
        size = 0;
    }


    void qpush(int val){

        Node *newNode = new Node(val);
        // check Whether it is empty or not
        if(front == NULL){
            front = rear = newNode;
        } 
        
        rear-> next = newNode;
        rear = newNode;
        size++;
    }

    int qpop(){
        // check whether linked list is null or not
        Node * temp = front;
        if(front == NULL) return -1;

        int ans = front->data;

        delete(temp);

        front = front->next;

        size--;

        return ans;
    }

    bool qempty(){

        if(front == NULL && rear == NULL) return true;

        return false;
    }

    int qFront(){
        if(front == NULL) return -1;

        else return front->data;
    }

    int qRear(){
        if(front == NULL && rear == NULL) return -1;

        else return rear->data;
    }

    int qsize(){
        if(front == NULL) return -1;

        return size;
    }


};

int main(){

    QueueLink ql;
    ql.qpush(10);
    ql.qpush(5);
    

    cout<<"Size of The the Queue -> "<<ql.qsize()<<endl;

    cout<<"Front Value -> "<<ql.qFront()<<endl;

    cout<<"Rear Value -> "<<ql.qRear()<<endl;

    ql.qpop();
    ql.qpop();

    ql.qpush(39);
    ql.qpop();

    ql.qpush(111);
    ql.qpop();


    cout<<"Size of the Queue -> "<<ql.qsize()<<endl;

    cout<<"Front Value -> "<<ql.qFront()<<endl;

    cout<<"Rear Value -> "<<ql.qRear()<<endl;

    cout<<"Queue empty   -> "<<ql.qempty()<<endl;

    return 0;
}