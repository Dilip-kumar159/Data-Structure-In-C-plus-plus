#include<iostream>
#include<vector>

 using namespace std;

// Recursion way Tc -> 2^n sc -> O(n)
int fibo(int n){

    if(n <= 1) return n;

    return fibo(n-1) + fibo(n-2);
}

// Recrusion to dp way Tc -> O(n) sc -> O(n) + O(n) for array

int fib(int n, vector<int> &dp){

    if(n <= 1) return n;

    if(dp[n] != -1) return dp[n];

    return dp[n] = fib(n-1, dp) + fib(n-2, dp);
}

// Recrusion to Tabulation Tc -> O(n) + O(n) for array , no call stack 
int f(int n, vector<int> &dp){

    dp[0] = 0;
    dp[1] = 1;

    for(int i=2; i<=n; i++) dp[i] = dp[i-1] + dp[i-2];

    return dp[n];
}

// Optimizing the space Tc -> O(n) sc -> O(1) which is constant
int fo(int n){

    int prev2 = 0, prev = 1;

    for(int i=2; i<=n; i++){

        int cur = prev2 + prev;

        prev2 = prev;

        prev = cur;
    }

    return prev;
}

int main(){

    int n;
    cin>>n;

    // cout<<fibo(n)<<endl;

    vector<int> dp(n+1, -1);
    // cout<<fib(n, dp)<<endl;

    // cout<<f(n, dp)<<endl;

    cout<<fo(n)<<endl;

    return 0;
}