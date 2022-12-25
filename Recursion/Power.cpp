#include<iostream>

using namespace std;

int power(int n, int x){

    if(x == 0) return 1;

    int ans = n * power(n , x-1);

    return ans;
}
int main(){

    int x = 3 , n = 5;

    cout << power(n, x)<<endl;
    return 0;
}