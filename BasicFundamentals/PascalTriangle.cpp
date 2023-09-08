#include<iostream>

using namespace std;

int factorial(int n){

    int fact = 1;

    for(int i=1; i<=n; i++)
        fact = fact * i;

    return fact;
}

int nCr(int row, int col){

    int ans = 1;

    for(int i=0; i<col; i++){

        ans = ans * (row-i);

        ans = ans / (i+1);
    }

    return ans;
}
int main(){

    int row, col;
    cin>>row>>col;

    // This is Brute Force Approach takes lot of time
    // int rowFact = factorial(row-1);

    // int colFact = factorial(col-1);

    // int val = (row-1) - (col-1);

    // int row_colFact = factorial(val);

    // int ans = rowFact / (colFact * row_colFact);

    // cout<<"Answer is : "<<ans<<endl;

    // Optimized Approach Tc -> O(col)

    int ans = nCr(row-1, col-1);

    cout<<"Answer is : "<<ans<<endl;

    // Inorder to print Nth row in the pascal Triangle
    // Brute Force Tc -> O(row * col)
    // for(int c = 1; c <= row; c++){

    //     cout<<nCr(row-1, c-1)<<" ";
    // }

    // Better Approach Tc -> O(n)
    int res = 1;
    cout<<1<<" ";

    for(int i=1; i<row; i++){

        res = res * (row-i);

        res = res / i;

        cout<<res<<" ";
    }
    
    return 0;
}