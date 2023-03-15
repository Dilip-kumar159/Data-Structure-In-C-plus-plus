#include<iostream>

using namespace std;


void bubbleSort(int *arr, int n){

    for(int i=0; i<n; i++){
        
        bool isSwapped = false;

        for(int j=0; j<n-i-1; j++){

            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwapped = true;
            }
        }

        if(isSwapped == false) break;

        cout<<"Runs : "<<i+1<<endl;
    }
}

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int n;
    cin>>n;

    int arr[20];

    for(int i=0; i<n; i++) cin>>arr[i];

    bubbleSort(arr, n);

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";

    return 0;
}