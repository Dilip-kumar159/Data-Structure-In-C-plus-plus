#include<iostream>

using namespace std;

class Heap{
    public:
    int arr[100];
    int size;

    Heap(){
        arr[0] = -1;
        size = 0;
    }

    // Insertion of Max Heap
    void insert(int val){

        size++;
        int index = size;
        arr[index] = val;

        // check whether the parent data is lesser than the child
        while(index > 1){

            int parent = index/2;

            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else return;
        }
    }

    // Deletion in Max Heap
    void deleteHeap(){

        // step 1 -> put the last element into first index
        arr[1] = arr[size];

        // step 2 -> remove the last element 
        size--;

        // propagate the root element into its correct position

        int index = 1;

        while(index < size){
            int leftIndex = 2*index;
            int rightIndex = 2*index+1;

            if(leftIndex < size && arr[index] < arr[leftIndex]){
                swap(arr[index], arr[leftIndex]);
                index = leftIndex;
            }

            else if(rightIndex < size && arr[index] < arr[rightIndex]){
                swap(arr[index], arr[rightIndex]);
                index = rightIndex;
            }
            else return;
        }
    }

    // print function
    void print(){

        for(int i=1; i<=size; i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};


void heapify(int arr[], int size, int i){

    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left < size && arr[largest] < arr[left]){
        largest = left;
    }

    if(right < size && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest != i){
        swap(arr[largest], arr[i]);
        heapify(arr, size, largest);
    }
}

int main(){

    // create a heap 
    Heap h;
    h.insert(70);
    h.insert(23);
    h.insert(98);
    h.insert(57);
    h.insert(88);
    h.insert(100);

    cout<<"Printing the Max Heap values "<<endl;
    h.print();

    h.deleteHeap();
    h.print();

    int arr[8] = {-1,30,58,22,19,53,99,100};
    int n = 8;

    for(int i=n/2; i>0; i--){
        heapify(arr, n, i);
    }

    cout<<"Printing the Heap using Heapify "<<endl;

    for(int i=1; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}