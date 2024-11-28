#include<iostream>
#include<queue>
using namespace std;

int main(){
    // priority_queue<int> pq; //here the queue will be max heap tree means higher element on top and 
    // lower element in below if we want revers of it then we need declaration in different way let's see
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(4);
    pq.emplace(2);
    pq.emplace(1);
    pq.push(9);
    pq.push(5);
    pq.push(7);
    // cout<<pq.top()<<endl;
    
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    return 0;
}