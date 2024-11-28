#include<iostream>
#include<vector>
#include<deque>
using namespace std;

int main(){
    deque<int> deq;
    deq.push_back(4);
    deq.push_back(3);
    deq.emplace_back(9);
    deq.push_front(1);
    deq.push_front(2);

    // simliary we can delete also
    deq.pop_back();
    for(int val:deq){
        cout<<val<<" ";
    }
    cout<<endl;
    
    deq.pop_front();
    for(int val:deq){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}