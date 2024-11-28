#include<iostream>
#include<vector>
using namespace std;

int main(){
    // pair<int,int> p={1,3};
    // cout<<p.first<<endl;
    // cout<<p.second<<endl;
    // Nested Pair are Possible
    // pair<int,pair<int,int>> p={1,{2,3}};
    // cout<<p.first<<endl;
    // cout<<p.second.first<<endl;
    // cout<<p.second.second<<endl;

    //  pair<int,pair<int,pair<char,string>>> p={1,{2,{'d',"deepu"}}};
    //  cout<<p.first<<endl;
    //  cout<<p.second.first<<endl;
    //  cout<<p.second.second.first<<endl;
    //  cout<<p.second.second.second<<endl;


    vector <pair<int,int>> vec={{1,2},{3,4},{5,6}};

    vec.push_back({7,8});  // here we give it information it is pair
    vec.emplace_back(9,8); //it is decide at the time of insertion itself it is pair or not
    

    for(auto val:vec){
        cout<<val.first<<" "<<val.second<<endl;
    }
    return 0;
}
