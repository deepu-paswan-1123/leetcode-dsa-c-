/*
There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4


Constraints:

1 <= nums.length <= 5000
-104 <= nums[i] <= 104
All values of nums are unique.
nums is an ascending array that is possibly rotated.
-104 <= target <= 104
*/

#include<iostream>
using namespace std;

int rotatedsortedarr(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    while(start <= end){
        int mid=start + (end-start)/2;
        if(arr[mid]== target){
            cout<<"the given element is present at index "<<mid<<" and the value is "<<arr[mid]<<endl;
            return mid;
        }

        if(arr[start] < arr[mid]){//left half sorted 
            if(arr[start] <= target && target <= arr[mid]){
                end=mid-1;
            }else{
                start = mid+1;
            }
        }else{//right half sorted
            if(arr[mid] <= target && target <= arr[end]){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
    cout<<"the given element is not present in the array your element is "<<target<<endl;
    return -1;
}

int sortarray(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    while(start <= end){
        int mid=start + (end-start)/2;

        if(arr[mid]==target){
            cout<<"this elmenet is present "<<arr[mid]<<" at index "<<mid<<endl;
            return mid;
        }

        if(arr[start] < arr[mid]){

            if(arr[start] <= target && target <= arr[mid]){
                end=mid-1;
            }else{
                start=mid+1;
            }

        }else{
            if(arr[mid] <= target && target <= arr[end]){
                start=mid+1;

            }else{
                end=mid-1;
            }
        }
    }
    cout<<"the give element is not present in the array"<<endl;
    return -1;
}

int main(){
    int arr[]={4,5,6,7,0,1,2}; //this is rotated sorted array means after sort it is rotated
    int size=end(arr)-begin(arr);
    int target = 0;
    // rotatedsortedarr(arr,size,target);
    sortarray(arr,size,target);
    return 0;
}