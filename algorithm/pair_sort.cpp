#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comparator(pair<int,int> p1,pair<int,int> p2){
    if(p1.second < p2.second){
        return true;
    }
    if(p1.second > p2.second){
        return false;
    }

    if(p1.first < p2.first){
        return true;
    }else{
        return false;
    }
}

int main(){
    vector<pair<int,int>> vec ={{4,5},{1,2},{8,7},{6,5},{3,5}};
    sort(vec.begin(),vec.end(),comparator);
    for(auto val:vec){
        cout<<val.first<<" "<<val.second<<endl;
    }
    return 0;
}