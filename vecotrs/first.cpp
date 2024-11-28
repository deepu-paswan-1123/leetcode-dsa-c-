#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(6);
    vec.push_back(9);
    vec.pop_back();
    vec.pop_back();
    vec.pop_back();
    vec.pop_back();
    vec.pop_back();
    vec.emplace_back(10);
    vec.push_back(45);
    vec.pop_back();
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    for(int val : vec){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"front "<<vec.front()<< " and back value "<<vec.back()<<endl;
    return 0;
}