#include<iostream>
#include<vector>
using namespace std;

void subsequence(int arr[], int n, int index, vector<int> &ans, vector<int> &temp){

    if(index >= n){
        int sum = 0;
        for(auto it : ans){
            sum += it;
        }
        temp.push_back(sum);
        return;
    }

    subsequence(arr, n, index+1, ans, temp);

    ans.push_back(arr[index]);
    subsequence(arr, n, index+1, ans, temp);

    ans.pop_back();
    

}


void sub(int arr[], int n, int index, int sum, vector<int> &ans){

    if(index == n){
        ans.push_back(sum);
        return;
    }

    // Not to take
    sub(arr, n, index+1, sum, ans);

    // take it or add it to the sum
    sub(arr, n, index+1, arr[index]+sum, ans);
}

int main(){

    int arr[] = {5,8,1};
    int n = 3;
    vector<int> ans;
    vector<int> temp;
    // subsequence(arr, n, 0,  ans, temp);

    // cout<<endl;

    sub(arr, n, 0, 0, temp);

    cout<<"Stored in Temp vector"<<endl;

    for(auto it : temp) cout<<it<<" ";

    return 0;
}