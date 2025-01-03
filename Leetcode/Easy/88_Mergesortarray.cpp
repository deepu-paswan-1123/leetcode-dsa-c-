/*
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

 

Example 1:

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
Example 2:

Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]
Explanation: The arrays we are merging are [1] and [].
The result of the merge is [1].
Example 3:

Input: nums1 = [0], m = 0, nums2 = [1], n = 1
Output: [1]
Explanation: The arrays we are merging are [] and [1].
The result of the merge is [1].
Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.
 

Constraints:

nums1.length == m + n
nums2.length == n
0 <= m, n <= 200
1 <= m + n <= 200
-109 <= nums1[i], nums2[j] <= 109
 

Follow up: Can you come up with an algorithm that runs in O(m + n) time?

*/


#include<iostream>
using namespace std;

int merge(int arr1[],int arr2[],int m,int n,int size1){
    int index=m+n-1;
    int i=m-1;
    int j=n-1;

    while(i >= 0 && j >= 0){
        if(arr1[i] >= arr2[j]){
            arr1[index]=arr1[i];
            i--;
            index--;
        }
        else{
            arr1[index]=arr2[j];
            index--;
            j--;
        }
    }

    while(j >= 0){
        arr1[index]=arr2[j];
        index--;
        j--;
    }

    for(int i=0;i<size1;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    
}

int main(){
    int arr1[]={4,5,6,0,0,0};
    int arr2[]={1,2,3};
    int m=3;
    int n=3;
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    merge(arr1,arr2,m,n,size1);
    return 0;
}