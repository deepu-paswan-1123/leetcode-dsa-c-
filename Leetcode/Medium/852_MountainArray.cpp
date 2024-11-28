/* 
You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

Return the index of the peak element.

Your task is to solve it in O(log(n)) time complexity.

 

Example 1:

Input: arr = [0,1,0]

Output: 1

Example 2:

Input: arr = [0,2,1,0]

Output: 1

Example 3:

Input: arr = [0,10,5,2]

Output: 1

 

Constraints:

3 <= arr.length <= 105
0 <= arr[i] <= 106
arr is guaranteed to be a mountain array.

*/

#include<iostream>
#include<climits> 
using namespace std;

int firstapproach(int arr[],int size){
    int maxnumber = INT_MIN;
    int index=-1;
    for(int i=0;i<size;i++){
        if (arr[i] > maxnumber) {
            maxnumber = arr[i];
            index = i;  // Update the index of the peak element
        }
    }
    cout<<maxnumber<<endl;
    cout<<index;
}

int secondapproach(int arr[],int size){
    int start=1;
    int end=size-2;
    while(start <= end){
        int mid=start+(end-start)/2;
        if(arr[mid-1] < arr[mid]  && arr[mid]>arr[mid+1]){
            cout<<"index of peak element is "<<mid<<" and peak element is "<<arr[mid]<<endl;
            return mid;
        }

        if(arr[mid-1] < arr[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
}

int peakelement(int arr[],int size){
    int start=1;
    int end=size-2;
    while(start <= end){
        int mid=start + (end-start)/2;
        if(arr[mid]>arr[mid-1 && arr[mid] > arr[mid+1]]){
            cout<<"this is the index of peak element "<<mid<<" and the element is "<<arr[mid]<<endl;
            return mid;
        }
        if(arr[mid]<arr[mid-1]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
}

int main(){
    int arr[]={3,5,7,4,2};
    int size=end(arr)-begin(arr);
    // firstapproach(arr,size);
    // secondapproach(arr,size);
    peakelement(arr,size);
    return 0;
}