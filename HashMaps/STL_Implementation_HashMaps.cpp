#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(){

    // creation of map
    map<string, int> mp;

    // insertion
    // 1.
    pair<string, int> p1 = make_pair("dilip", 3);
    mp.insert(p1);

    // 2.
    pair<string, int> p2 = {"car", 8};
    mp.insert(p2);

    // 3
    mp["Bike"] = 6;
    mp["bicycle"] = 26;
    mp["apple"] = 53;
    mp["juice"] = 43;
    mp["zebra"] = 1;
    mp["Animal"] = 99;

    cout<<"first Element Dilip -> "<<mp["dilip"]<<endl;
    cout<<"third Element -> "<<mp["Bike"]<<endl;
    cout<<"second Element -> "<<mp["car"]<<endl;

    mp["dilip"] = 393;
    cout<<"after changing the value of  Dilip -> "<<mp["dilip"]<<endl;

    cout<<"Size of the Map -> "<<mp.size()<<endl;

    // to access
    // cout<< mp.find("babbar");
    // cout<<mp.at("car")<<endl;

    // check
    cout<<"whether the value is present -> "<<mp.count("bro")<<endl;
    cout<<"whether the value is present -> "<<mp.count("car")<<endl;

    //erase
    mp.erase("Bike");
    cout<<"Size of the Map -> "<<mp.size()<<endl;

    // One Way to traverse through the map
        for(auto it = mp.begin(); it!= mp.end(); it++){
        cout<<it->first<<" -> "<<it->second<<endl;
        }

    // Second Way to travese through the map
    map<string, int> :: iterator it = mp.begin();

    while(it != mp.end()){
        cout<<it->first<<" -> "<<it->second<<endl;
        it++;
    }


    return 0;
}