#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
// Bruete force approach
void TwoSum(int arr[],int n,int target){
    bool ans=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<" "<<arr[j]<<endl;
                ans=true;
            }
        }
    }
    if(!ans){
        cout<<"this given target sum not exist in the array"<<target<<endl;
    }
}

// better approach
void twoSum(int arr[],int n,int target){
    sort(arr,arr+n);
    int start=0;
    int end=n-1;
    while(start<end){
        if(arr[start]+arr[end]==target){
            cout<<arr[start]<<" "<<arr[end]<<endl;
            return ;
        }
        else if(arr[start]+arr[end]<target){
            start++;
        }
        else{
            end--;
        }
    }
    cout<<"this given target sum is not exist in the arr "<<target<<endl;
}

// optimized approach
vector<int> Twosum(int arr[],int n,int target){
    unordered_map<int,int> m;
    vector<int> ans;
    for(int i=0;i<n;i++){
        int first=arr[i];
        int sec=target-first;
        if(m.find(sec) != m.end()){
            ans.push_back(i);
            ans.push_back(m[sec]);
            break;
            m[first]=i;
        }
        
    }
    return ans;
}

vector<int> twosum(int arr[],int n,int target){
    unordered_map<int,int> m;
    vector<int> ans;
    for(int i=0;i<n;i++){
        int first=arr[i];
        int sec=target-first;
        if(m.find(sec) != m.end()){
            ans.push_back(i);
            ans.push_back(m[sec]);
            break;
        }
            m[first]=i;
    }
    return ans;
}

int main(){
    int arr[]={5,2,11,7,15};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=9;
    vector<int> res= twosum(arr,size,target);

    for(int index:res){
        cout<<index<<" ";
    }
    cout<<endl;
    return 0;
}