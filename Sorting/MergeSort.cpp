/*
    merge sort in this sorting we break the array into two halves and sort them individually and then merge them in sorted order
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merge(vector<int>& arr,int st,int mid,int end){
    vector<int> temp;
    int i=st;
    int j=mid+1;
    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int k=0;k<temp.size();k++){
        arr[st+k] = temp[k];
    }
}

void mergesort(vector<int>& arr,int st,int end){
    if(st<end){
        int mid = st + (end-st)/2;
        //left
        mergesort(arr,st,mid);
        //right
        mergesort(arr,mid+1,end);

        //perform the merging here
        merge(arr,st,mid,end);
    }
}

int main(){
    vector<int> arr={12,31,35,8,32,17};
    mergesort(arr,0,arr.size()-1);
    for(auto val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}