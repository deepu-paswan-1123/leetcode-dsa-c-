#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(2);
    s.emplace(8);
    s.push(6);
    s.push(4);
    int i=0;
    stack<int> s2;
    s2.swap(s);
    // while(!s.empty()){
    //     cout<<s[i]<<endl;
    // }
    cout<<s.size()<<endl;
    return 0;
}