#include<iostream>
#include<vector>

using namespace std;

void pattern(int sum, int n, vector<int> &ans){

    if(sum <= 0) return;

    ans.push_back(sum);

    pattern(sum-5, n, ans);
}
int main(){

    vector<int> ans;
    int n = 16;

    pattern(n, n, ans);

    cout<<"Printing the Recursive call"<<endl;
    for(auto i : ans) cout<<i<<" ";
    cout<<endl;

    return 0;
}