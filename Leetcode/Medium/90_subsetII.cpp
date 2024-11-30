#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printsubarr(vector<int>& arr,vector<int>& ans,int i){
    sort(arr.begin(),arr.end());
    if(i == arr.size()){
        cout<<"[";
        for(auto val:ans){
            cout<<" "<<val<<" ";
        }
        cout<<"]";
        cout<<endl;
        return;
    }

    ans.push_back(arr[i]);
    printsubarr(arr,ans,i+1);
    ans.pop_back();
    int idx=i+1;
    while(idx<arr.size() && arr[idx] == arr[i]){
        idx++;
    }
    printsubarr(arr,ans,idx);
}

int main(){
    vector<int> arr={1,2,2};
    vector<int> ans;
    printsubarr(arr,ans,0);
}