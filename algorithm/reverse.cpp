#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    vector<int> vec={6,4,7,3,8};
    reverse(vec.begin(),vec.end());
    for(auto val:vec){
        cout<<val<<" ";
    }
    cout<<endl;
    string s="abc";
    next_permutation(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}
