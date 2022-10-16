//Linked list in STL

#include<iostream>
#include<list>

using namespace std;

int main(){

    list<int> node;

    node.push_back(10);
    node.push_back(30);
    node.push_back(50);
    node.push_back(60);
    node.push_back(80);

    cout<<node.back()<<endl;

    node.pop_back();

    cout<<"After pop operation "<<node.front()<<endl;
    cout<<"After pop operation "<<node.back()<<endl;

    cout<<node.empty()<<endl;

    cout<<"Size of the List "<<node.size()<<endl;

    return 0;
}