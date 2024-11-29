#include<iostream>
#include<vector>
using namespace std;

// time complexity - O(2pow(n)*n)
void printsubarr(vector<int>& arr,vector<int>& ans,int i){
    if(i == arr.size()){
        cout<<"[";
        for(auto val:ans){
            cout<<" "<<val<<" ";
        }
        cout<<"]";
        cout<<endl;
        return;
    }

    //include element of array
    ans.push_back(arr[i]);
    printsubarr(arr,ans,i+1);

    //backtracking by pop
    ans.pop_back();
    printsubarr(arr,ans,i+1);
}

int main(){
    vector<int> arr={1,2,3,4};
    vector<int> ans;
    int i=0;
    printsubarr(arr,ans,i);
    return 0;
}