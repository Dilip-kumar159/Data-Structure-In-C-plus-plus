#include<iostream>

using namespace std;

int partition(int arr[], int s, int e){

    int i = s, j = e;
    int pivot = arr[s];

    while(i < j){

        while(arr[i] <= pivot && i < e) i++;

        while(arr[j] > pivot && j > s) j--;

        if(i < j) swap(arr[i], arr[j]);
    }
    swap(arr[j], arr[s]);

    return j;
}
void quickS(int arr[], int s, int e, int n){
    
    if(s < e){

        int pivot = partition(arr, s, e);
        quickS(arr, s, pivot-1, n);
        quickS(arr, pivot+1, e, n);
    }
}
int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin>>n;

    int arr[20];

    for(int i=0; i<n; i++) cin>>arr[i];

    quickS(arr, 0, n-1, n);

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    
    return 0;
}