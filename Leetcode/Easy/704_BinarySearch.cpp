#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int>& arr,int target,int start,int end){
    if(start <= end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]<target){
            return BinarySearch(arr,target,mid+1,end);
        }else{
            return BinarySearch(arr,target,start,mid-1);
        }
    }
    return -1;
}

int Search(vector<int> & arr,int target){
    int start=0;
    int end=arr.size()-1;
    return BinarySearch(arr,target,start,end);
}

int main(){
    vector<int> arr={-1,0,3,5,9,12};
    int target=12;
    cout<<Search(arr,target)<<endl;
    return 0;
}