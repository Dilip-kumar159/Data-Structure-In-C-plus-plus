#include<iostream>

using namespace std;

void selectionSort(int *arr, int n){

    for(int i=0; i<n-1; i++){

        int minIndex = i;

        for(int j=i+1; j<n; j++){

            if(arr[j] < arr[minIndex]) minIndex = j;
        }

        swap(arr[minIndex], arr[i]);
    }
}
int main(){

    freopen("input.txt", "r",stdin);
    freopen("ouput.txt","w",stdout);

    int n;
    cin>>n;

    int arr[10];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    selectionSort(arr, n);

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";

    cout<<endl;

    return 0;
}