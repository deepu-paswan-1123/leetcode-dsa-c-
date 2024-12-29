/*
 here i am going to write the code of quick sort algorithm and their time complexity and space complexity
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//time complexity of quick sort is O(n log n) in average case
//in worst case it is O(n^2) time complexity
//space complexity is O(1)
// int partition(vector<int>& arr, int st, int end){
//     int idx =st-1;
//     int pivot = arr[end];

//     for(int j=st;j<end;j++){
//         if(arr[j]<=pivot){
//             idx++;
//             swap(arr[idx],arr[j]);
//         }
//     }
//     idx++;
//     swap(arr[end],arr[idx]);

//     return idx;
// }

// void quicksort(vector<int>& arr, int st, int end) {
//     if(st<end){
//         int pividx = partition(arr,st,end);

//         //call for the left half
//         quicksort(arr,st,pividx-1);

//         //call for the right half
//         quicksort(arr,pividx+1,end);
//     }
// }

int partition(vector<int>& arr,int st,int end){
    int idx=st-1;
    int pivot = arr[end];
    for(int j=st;j<end;j++){
        if(arr[j]<=pivot){
            idx++;
            swap(arr[idx],arr[j]);
        }
    }
    idx++;
    swap(arr[end],arr[idx]);
    return idx;
}

void quicksort(vector<int>& arr,int st,int end){
    if(st<end){
        int pividx = partition(arr,st,end);

        //for left array after partition
        quicksort(arr,st,pividx-1);
        //for right array after partition
        quicksort(arr,pividx+1,end);
    }
}

int main(){
    vector<int> arr={12,31,35,8,32,17};
    int n=arr.size();
    quicksort(arr,0,n-1);

    cout<<"{ ";
    for(auto val:arr){
        cout<<val<<" ";
    }
    cout<<"}";
    cout<<endl;
    return 0;
}

/*
    quciksort algorithm define properly
    question:
    {12,31,35,8,32,17};
    1. how to choose the pivot?
    ans. any value can choose
    ans. pivot= arr[end];
    2. how to partition the array?
    ans.  here pivot = 17 for this array
    now here compare all element one by one with pivot
    now her comparison is done
    12<17  => {12,31,35,8,32,17}  => {12,31,35,8,32,17} here no change because 12<17
    31>17  => {12,31,35,8,32,17}  => {12,8,35,31,32,17} here 31>17 so swap 31 and 17
    35>17  => {12,31,35,8,32,17}  => {12,31,35,8,32,17}
    8<17
    32>17
    17=17
    now algorithm does work 
    smaller will replaced at the left side of the pivot
    and greater element will place at the right side of the pivot
*/


