// Stack implementation using linked list, all operations will be on 0(1).
// -> Why not Array only Linked List the answer is
// -> Both array and linkedlist takes 0(1) operation on all the function. 
// -> But Array has bound in the memory compare to linked list.

#include <iostream>

using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class Stack
{

public:
    int size;
    Node *head;

    Stack()
    {
        head = NULL;
        size = 0;
    }

    // push operation
    void push(int data)
    {

        Node *newNode = new Node(data);

        newNode->next = head;
        head = newNode;
        size++;
    }

    // pop operation
    void pop()
    {

        Node *temp = head;

        if (head == NULL)
        {
            cout << "Stack is Underflow" << endl;
            return;
        }
        head = head->next;
        delete (temp);
        size--;
    }

    // size of operation
    int getSize()
    {
        return size;
    }

    // top operation
    int top()
    {
        if (head != NULL)
            return head->data;

        else
            return -1;
    }

    // isEmpty or Not
    bool empty()
    {
        return size == 0;
    }
};

int main()
{

    Stack st;

    st.push(10);
    st.push(7);
    st.push(13);


    cout<<"Size : "<<st.getSize()<<endl;

    st.pop();

    cout<<"Top Element : "<<st.top()<<endl;

    cout<<"Is Empty if is 0 then false or 1 then true: "<<st.empty()<<endl;

    cout<<"Size : "<<st.getSize()<<endl; 

    return 0;
}