#include<iostream>
#include<queue>

using namespace std;

int main(){

    // creation
    queue<int> q;

    // Insertion
    q.push(10);
    cout<<"Front Element -> "<<q.front()<<endl;
    cout<<"Rear Element -> "<<q.back()<<endl;

    q.push(5);
    cout<<"Front Element -> "<<q.front()<<endl;
    cout<<"Rear Element -> "<<q.back()<<endl;

    q.push(34);
    cout<<"Front Element -> "<<q.front()<<endl;
    cout<<"Rear Element -> "<<q.back()<<endl;

    q.push(76);
    cout<<"Front Element -> "<<q.front()<<endl;
    cout<<"Rear Element -> "<<q.back()<<endl;

    cout<<"Size of the Queue -> "<<q.size()<<endl;

    q.pop();
    cout<<"Size of the Queue -> "<<q.size()<<endl;

    if(q.empty()) cout<<"Queue is Empty"<<endl;

    else cout<<"Queue is Not Empty"<<endl;

    cout<<"Front Element -> "<<q.front()<<endl;

    return 0;
}