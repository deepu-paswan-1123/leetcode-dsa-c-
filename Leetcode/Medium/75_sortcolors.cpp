/*

Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

 

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]
 

Constraints:

n == nums.length
1 <= n <= 300
nums[i] is either 0, 1, or 2.

*/


#include<iostream>
using namespace std;

// here the time complexity is O(n) but there are 2passes are done 
void firstapproach(int arr[],int size){
    int count0=0,count1=0,count2=0;
    for(int i=0;i<size;i++){
        if(arr[i] == 0){
            count0 ++;
        }
        else if(arr[i] == 1){
            count1++;
        }
        else{
            count2++;
        }
    }

    int ind=0;
    for(int i=0;i<count0;i++){
        arr[ind++]=0;
    }
    for(int i=0;i<count1;i++){
        arr[ind++]=1;
    }
    for(int i=0;i<count2;i++){
        arr[ind++]=2;
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//Dutch National Flag algorithm is optimal solution of it with 1pass and O(n)
/*
    0-range    start to start-1--first part
    1-range    start to mid-1--second part
    2-range    high+1 to size-1--third part

    here one range is left mid to high in this range are unsorted array is lie rest part contain the sorted
    array
*/
int secondapproach(int arr[],int size){
    int start=0;
    int mid=0;
    int end=size-1;
    while(mid <= end){
        if(arr[mid]==0){
            swap(arr[start],arr[mid]);
            start++;
            mid++;
        }
        else if (arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[end]);
            end--;
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int secondapproachsec(int arr[],int size){
    int count0=0,count1=1,count2=2;
    int mid=0;
    int low=0;
    int high=size-1;
    while(mid <= high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}

int main(){
    int arr[]={2,0,2,1,1,0};
    int size=end(arr)-begin(arr);   
    // firstapproach(arr,size);
    // secondapproach(arr,size);
    secondapproachsec(arr,size);
    return 0;
}