#include<iostream>
#include<vector>

using namespace std;

bool permute(int arr[], vector<int> &ans, int t, int n, int sum, int ind){

    if(ind == n){
        if(sum == t){
            for(auto i : ans) cout<<i<<" ";
            cout<<endl;
            return true;
        }
        return false;
    }

    // take the element and add it to the answer array
    ans.push_back(arr[ind]);
    sum+=arr[ind];

    if(permute(arr, ans, t, n, sum, ind+1) == true) return true;

    sum-=arr[ind];
    ans.pop_back();

    if(permute(arr, ans, t, n, sum, ind+1) == true) return true;

    return false;
}

int permuteCount(int arr[], int t, int n, int sum, int index){

    if(index == n){

        if(sum == t){
            return 1;
        }

        return 0;
    }

    sum+= arr[index];

    int left = permuteCount(arr, t, n, sum, index+1);

    sum-=arr[index];

    int right = permuteCount(arr, t, n, sum, index+1);

    return left + right;
}
int main(){

    int arr[] = {1,2,3,4};
    int t = 4;

    int n = 4;

    vector<int> ans;

    // cout<<"Printing all the possible permutation of the Kth sum"<<endl;
    // permute(arr, ans, target, n, 0, 0);

    cout<<"Number of kth sum present in Permutation"<<endl;
    cout<<permuteCount(arr, t, n, 0, 0)<<endl;

    return 0;
}