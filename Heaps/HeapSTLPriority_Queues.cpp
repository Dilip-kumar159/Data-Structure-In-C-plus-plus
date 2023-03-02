#include<iostream>
#include<queue>

using namespace std;

int main(){

    // Max heap
    priority_queue<int> pq;
    pq.push(40);
    pq.push(90);
    pq.push(10);
    pq.push(70);

    cout<<"Top most element -> "<<pq.top()<<endl;
    pq.pop();
    cout<<"After deleting Top most element -> "<<pq.top()<<endl;
    cout<<"The size of the priority Queue -> "<<pq.size()<<endl;


    // Min Heap
    priority_queue<int, vector<int> , greater<int> > minHeap;
    minHeap.push(40);
    minHeap.push(90);
    minHeap.push(10);
    minHeap.push(70);

    cout<<"Printing Min Heap \n";
    while(!minHeap.empty()){

        cout<<minHeap.top()<<" ";

        minHeap.pop();
    }
    
    cout<<endl<<"Min Heap"<<endl;
    cout<<"Top most element -> "<<minHeap.top()<<endl;
    minHeap.pop();
    cout<<"After deleting Top most element -> "<<minHeap.top()<<endl;
    cout<<"The size of the priority Queue -> "<<minHeap.size()<<endl;



    return 0;
}