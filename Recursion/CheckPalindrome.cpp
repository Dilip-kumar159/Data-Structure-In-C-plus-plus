#include<iostream>
#include<string>

using namespace std;

bool checkPalindrome(string str, int s, int e){

    if(s > e) return true;

    if(str[s] != str[e]) return false;

    return checkPalindrome(str, s+1, e-1);
}
int main(){

    string str;
    cout<<"Enter the string -> "<<endl;
    cin>>str;

    int start = 0;
    int end = str.length();

    if(checkPalindrome(str, start, end-1)) cout<<"It is palindrome"<<endl;

    else cout<<"It is not palindrome"<<endl;

    return 0;
}