#include<iostream>
#include<stack>

using namespace std;

int main(){

    // Creating Stack using STL
    stack<int> st;

    // Pushing element in Stack
    st.push(29);
    st.push(30);
    st.push(40);

    // top element inorder to check the top of the Stack
    cout<<"Top Element : "<<st.top()<<endl;

    // Removing element in Stack
     st.pop();

    cout<<"Top Element : "<<st.top()<<endl; 

    // Checking whether the stack is empty or not
    // it returns boolean if 0 -> Then it is not empty, 1 -> It is empty.
    cout<<st.empty()<<endl; 

    // checking the size of the stack, return the number of elements present in stack.
    cout<<st.size()<<endl;

    return 0;
}