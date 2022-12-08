#include<iostream>
#include<queue>
using namespace std;

class MyStack {
public:
 queue<int> q;
    
    // Optimized Approach where only one queue is used .
    void push(int x) {
        // push the element in queue
        q.push(x);

        // put size - 1 element in the queue itself
        for(int i=0; i<q.size()-1; i++){
            int val = q.front();

            q.pop();

            q.push(val);
        }
    }
    
    int pop() {
        
        if(q.empty()) return -1;

        int ans = q.front();

        q.pop();

        return ans;
    }
    
    int top() {
        
        if(q.empty()) return -1;

        return q.front();
    }
    
    bool empty() {
        
        if(q.empty()) return true;

        return false;
    }
};