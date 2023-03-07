#include<iostream>

using namespace std;

// First Approach of adding the Element whitout using airthmetic operator
int gowrish(int a, int b){

    for(int i=1; i<=b; i++) a++;

    return a;
}

int main(){

    int a,b;
    cout<<"Enter the first Element -> ";
    cin>>a;
    cout<<"\n";
    cout<<"Enter the second Element -> ";
    cin>>b;
    cout<<endl;

    int ans = gowrish(a,b);

    cout<<"The Answer is : "<<ans<<endl;

    return 0;
}
