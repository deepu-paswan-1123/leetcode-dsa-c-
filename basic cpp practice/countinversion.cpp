#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//here time complexity is O(n^2);
int countinversion(vector<int>& arr,int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    return count;
}

// optimal approach but this is fail for the particular type of the array like {1,2,3,4,5} because it is not a sorted array
// here the time complexity is O(nlogn)
int countinversion(vector<int>& arr,int n){
    int count=0;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        if(arr[i]!=i){ //{6,3,5,2,7} i=0 arr[i]=6 arr[i]-i=-1
            count++;
        }
    }
    cout<<endl;
    return count;
}


// count iversion through the merge sort
//time complexity is O(nlogn) ans space complexity is O(n)
int merge(vector<int>& arr, int st,int mid ,int end){
    vector<int> temp;
    int invCount = 0;
    int i = st;
    int j = mid+1;

    while(i<=mid && j<= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            invCount +=(mid-i+1);
            j++;
        }
    }

    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx=0;idx<temp.size();idx++){
        arr[idx+st] = temp[idx];
    }

    return invCount;
}

int mergeSort(vector<int>& arr,int st,int end){
    if(st<end){
        int mid = st+(end-st)/2;

        //for left part here i call the mergeSort function
        int leftInv = mergeSort(arr,st,mid);
        int rightInv = mergeSort(arr,mid+1,end);

        int invCount = merge(arr,st,mid,end);

        return leftInv+rightInv+invCount;
    }
    return 0;
}


int main(){
    // vector<int> arr = {6,3,5,2,7};
    vector<int> arr = {5, 3, 2, 1, 4};
    int n = arr.size();
    int res = countinversion(arr,n);
    cout<<"this is the result of the count inversion of the array "<<res<<endl;

    // int res = mergeSort(arr,0,n-1);
    // cout<<"Inversion count "<<res<<endl;
    return 0;
}