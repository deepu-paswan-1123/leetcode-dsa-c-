#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(8);
    q.emplace(7);
    q.push(2);
    q.push(3);

    q.pop();
    cout<<q.front()<<endl;
    return 0;
}