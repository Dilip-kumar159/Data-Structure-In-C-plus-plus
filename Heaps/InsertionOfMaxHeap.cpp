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


    // print function
    void print(){

        for(int i=1; i<=size; i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};
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

    return 0;
}