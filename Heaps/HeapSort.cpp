#include<iostream>
#include<vector>

using namespace std;

void heapify(vector<int>& arr, int size, int i){

    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left <= size && arr[largest] < arr[left]){
        largest = left;
    }

    if(right <= size && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest != i){
        swap(arr[largest], arr[i]);
        heapify(arr, size, largest);
    }
}

void sortHeap(vector<int>& arr, int n){

    int size = n;

    while(size > 0){

        // step1 swap
        swap(arr[size], arr[0]);

        // step2
        size--;

        // step3 put the root node to its correct position this is done by heapifY algo
        heapify(arr, size, 0);
    }
}

vector<int> heapSort(vector<int>& arr, int n) {
	
    // build the heap
    for(int i=n/2; i>=0; i--){
        heapify(arr, n-1, i);
    }
    
    // sort heap
    sortHeap(arr, n-1);
    
    return arr;
}
