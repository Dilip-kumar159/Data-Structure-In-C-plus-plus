#include<stack>
#include<iostream>
using namespace std;

class MyQueue {
public:
    int front;
    stack<int> s1;
    stack<int> s2;
    MyQueue() {
        
        int front = 0;
    }
    
    // This approach takes Tc -> O(N) while pushing
    void push(int x) {
        
        // // Transfer all the elements which are present in stack 1 to stack 2
        // while(!s1.empty()){
        //     s2.push(s1.top());
        //     s1.pop();
        // }

        // // Then add the new element in stack 1
        // s1.push(x);

        // // Then copy back all the elements which are present in stack 2
        // while(!s2.empty()){
        //     s1.push(s2.top());
        //     s2.pop();
        // }


        // Optimized Approach Takes TC -> O(1)
        if(s1.empty()) front = x;

        s1.push(x);
    }
    
    int pop() {
        
        // check whether stack 2 is empty or not if it is empty push all stack 1 to 2
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }

        int ans = s2.top();
        s2.pop();
        return ans;
        
    }
    
    int peek() {
        
        if(!s2.empty()) return s2.top();

        return front;
    }
    
    bool empty() {
        
        return s1.empty() && s2.empty();

    }
};
