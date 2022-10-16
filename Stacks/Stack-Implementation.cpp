// Implementing Stack using Arrays.
#include<iostream>

using namespace std;

class Stack{

    // properties
    int top;
    int *arr;
    int size;

    public:
    // Constructor 
    Stack(int size){
        this->size = size;
        arr = new int(size);
        top = -1;
    }

    // Push Function
    void push(int element){

        if(size - top > 1){
            top++;
            arr[top] = element;
        }else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    // Pop Function
    void pop(){
        if(top >= 0){
            top--;
        }else{
            cout<<"Stack Underflow"<<endl;
           
        }
    }

    // Top Element Function
    int peek(){
        if(top >= 0){
            return arr[top];
        }else{
            cout<<"No Elements in Stack , Top is Empty"<<endl;
            return -1;
        }
    }

    // Empty Function
    bool empty(){
        if(top >= 0){
            cout<<"Stack is Not Empty"<<endl;
            return 0;
        }else{
            cout<<"Stack is Empty"<<endl;
            return 1;
        }
    }

};

int main(){

    Stack st(4);

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout<<"Top Element is : "<<st.peek()<<endl;
    
    st.pop();
    st.pop();
    st.pop();
    st.pop();

    cout<<"Top Element is : "<<st.peek()<<endl;

    cout<<st.empty()<<endl;

    return 0;
}