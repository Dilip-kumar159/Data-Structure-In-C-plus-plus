// Linked List Implementation using Class

#include<iostream>

using namespace std;


// Node Implementation
class Node{
   
   
    public:

    int data;
    Node *next;

    //Constructor
    Node(){
        data = 0;
        next = NULL;
    }

    //Parameterized Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList{

    Node* head;

    public:
    // Constructor
    LinkedList(){
        head = NULL;
    }

    // Function Insertion of a node
    void insertNode(int data){

        // Creating New Node
        Node* newNode = new Node(data);

        // If head is null
        if(head == NULL){
            head = newNode;
            return;
        }

        // if element is present in linked list 
        Node* temp = head;

        while(temp->next != NULL){
            // iterate the linked list until the last node
            temp = temp->next;
        }

        // if temp->next is null that means temp is in last node of the linked list
        temp->next = newNode;

    }

    // Function Deletion of a node
    void deleteNode(int position){

        Node* temp1 = head, *temp2 = NULL;

        int size = listSize();

        // if size is out of linked list range

        if(position > size){
            cout<<"Size is out of range"<<endl;
            return;
        }

        // if position 1 should be deleted
        if(position == 1){
            head = head->next;
            delete temp1;
            return;
        }

        while(position-- > 1){
            
            // assign temp2 to temp1, which temp1 has head reference,
            temp2 = temp1;

            // change the pointer to the next
            temp1 = temp1->next;
        }
        
        // change the pointer
        temp2->next = temp1->next;

        // delete the node
        delete temp1;

    }

    // Function Printing the linked list
    void printList(){

        Node* temp = head;

        if(head == NULL){
            cout<<"Linked List is Empty!!!"<<endl;
            return;
        }

        while(temp != NULL){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<endl;
    }

    // Function LinkedList Size
    int listSize(){

        int len = 0;
        Node* temp = head;

        // if Linked list is empty
        if(head == NULL){
            cout<<"Linked List is Empty"<<endl;
            return -1;
        }

        while(temp != NULL){
            len++;
            temp = temp->next;
        }

        return len;
    }
};

int main(){

    // Object Created
    LinkedList list;

    // Insertion
    list.insertNode(20);
    list.insertNode(40);
    list.insertNode(60);
    list.insertNode(90);

    // Deletion
    list.deleteNode(4);

    // printing the linked list
    list.printList();

    // Checking the size of the Linked list
    int size = list.listSize();

    cout<<"Size of the Linked List : "<<size<<endl;

    return 0;
}