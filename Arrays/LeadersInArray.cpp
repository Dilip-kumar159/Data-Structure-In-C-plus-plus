#include<iostream>
#include<vector>

using namespace std;

vector<int> leaders(int arr[], int n){
       
       vector<int> ans;
       
       for(int i=0; i<n-1; i++){
           
           for(int j=i+1; j<n; j++){
               
               if(arr[i] > arr[j]){
                   
                   if(j == n-1) ans.push_back(arr[i]);
               }
               else 
                    break;
           }
       }
       
       ans.push_back(arr[n-1]);
       
       return ans;
        
    }

int main(){

    int n;
    cout<<"Enter the Elements -> "<<endl;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    vector<int> ans = leaders(arr, n);

    for(auto i : ans) cout<<i<<" ";

    cout<<endl;

    return 0;
}