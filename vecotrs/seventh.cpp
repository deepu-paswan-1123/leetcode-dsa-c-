#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    // map<string,int> m;   //this map method store key value pair uniquely and show in ascending order according
    // to key it does ascending
    // multimap<string,int> m; 
    // m["tv"]=100;
    // m["refrigerator"]=50;
    // m["phones"]=70;
    // m["tab"]=70;
    // m["microwave"]=90;

    
    // now here we are going to use the unodered_map in which it gives the result without any arrangement
    // and in this there should be no key repeated
    unordered_map<string,int> m;
    //here we are use insert and emplace 
    m.insert({"laptop",56});
    m.insert({"tv",56});
    m.insert({"tablet",56});
    m.insert({"refregirator",56});
    m.emplace("computer",89);

    //we can use erease for delete particular key value pair
    // m.erase("laptop");---------------- //here we are noticing all the laptop are deleted but if we want to delete only one the
    // we can use the find method which return the iterator(actual memory location) let's see below

    // m.erase(m.find("laptop")); // here this is the method of delete one key element if it is exist 
    // more than one time in multimap

    cout<<m.count("laptop")<<endl;

    if(m.find("laptop") != m.end()){
        cout<<"the given key is exist \n";
    }else{
        cout<<"the given element is not exist \n";
    }

    for(auto p: m){
        cout<<p.first<< " "<<p.second << endl;
    }
    return 0;
}