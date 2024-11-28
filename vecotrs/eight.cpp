#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

/*
similiary the map here also the three types of the set is also occur that is set,multiset,unordered_set and
these also work like the map but here only are values exist not key.
*/

int main(){
    // set<int> s;  //first type of set => this accept only unique values if values repeat then it not considered
    // that and their size not increased as well.

    // multiset<int>s; //it accept the same value and increase the size;

    unordered_set<int> s; //it not give the answer in order so it has no lower and upper bound
    s.insert(8);
    s.insert(7);
    s.insert(8);
    s.insert(2);
    s.insert(0);
    s.insert(1);
    s.insert(6);

    cout<<s.size()<<endl;
    cout<<s.count(8)<<endl;
    // s.erase(2);
    // cout<<"lower bound = "<<*(s.lower_bound(6))<<endl;
    // cout<<"upper bound = "<<*(s.upper_bound(6))<<endl;

    for(auto val:s){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}