#include<iostream>
#include<vector>

using namespace std;

void merge(int arr[], int start, int mid, int end){

    // temproary array to store the sorted elements
    vector<int> temp;

    int left = start;
    int right = mid+1;

    while(left <= mid && right <= end){

        if(arr[left] <= arr[right])
            temp.push_back(arr[left++]);

        else temp.push_back(arr[right++]);
    }

    while(left <= mid) temp.push_back(arr[left++]);

    while(right <= end) temp.push_back(arr[right++]);

    // now temp array contains sorted elements need to copy to the main array
    for(int i=start; i<=end; i++){
        arr[i] = temp[i-start];
    }

}
void mergeSort(int arr[], int start, int end){

    // if there is only one element then it is consider as sorted
    if(start >= end) return;

    int mid = (start+end)/2;

    // for first half of the array 
    mergeSort(arr, start, mid);

    // for second half of the array
    mergeSort(arr, mid+1, end);

    // merging the first and second half of the array in sorted way.
    merge(arr, start, mid, end);
}

void display(int *arr, int n){

    for(int i=0; i<n; i++){
       cout<<arr[i]<<" ";
    }

    cout<<"\n";
}
int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin>>n;
    
    int arr[20];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // Before sorting the array
    cout<<"Before Applying the Merge Sort \n";
    display(arr, n);

    // passing the merge sort parameters
    int start = 0;
    int end = n-1;
    mergeSort(arr, start, end);

    cout<<"After Applying the Merge Sort \n";

    display(arr, n);

    return 0;
}