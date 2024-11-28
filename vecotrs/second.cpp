#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main(){

    list<int> l;
    l.push_back(2); //emplace_back() we can use it in place of push_back()
    l.push_back(1);
    l.push_front(6);
    l.push_front(3); //emplace_front() we can use it in place of push_front();
    //similiary we can delte both side it is actually based on doubly linked list
    // generally we can use that function in the list which we are using in the vector 
    // like begin, end,rbegin,rend,insert,clear,empty,erase,size
    for(int val:l){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<l.size()<<endl;
    return 0;
}