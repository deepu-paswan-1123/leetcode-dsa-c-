/*
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]

Constraints:

2 <= nums.length <= 105
-30 <= nums[i] <= 30
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
 

Follow up: Can you solve the problem in O(1) extra space complexity?
(The output array does not count as extra space for space complexity analysis.)

*/


#include<iostream>
using namespace std;

// this is first approach but here problem is it is not the efficient problem solution
// and in this question one things said do not use of division operator
int calculateindexproduct(int arr[],int size){
    int product=1;
    for(int i=0;i<size;i++){
        int result=1;
        for(int j=0;j<size;j++){
            result *=arr[j];
        }
        product = result/arr[i];
        cout<<product<<" ";
        product =1;
    }
}

// another O(n2) approach
int secondapproach(int arr[],int size){
    for(int i=0;i<size;i++){
        int product =1;
        // int result=1;
        for(int j=0;j<size;j++){
            if(i != j){
                product *=arr[j]; 
            }
        }
        cout<<product<<" ";
    }
    
}

// third approach
int thirdapproach(int arr[],int size){
    int suffix[size],prefix[size],result[size];
    prefix[0]=1;
    suffix[size-1]=1;
    // for calculate the suffix
    for(int i=1;i<size;i++){
        prefix[i]=prefix[i-1]*arr[i-1];
    }
    
    // for caluclate the prefix
    for(int i=size-2;i>=0;i--){
        suffix[i]=suffix[i+1]*arr[i+1];
    }

    // now calculate the final result
    for(int i=0;i<size;i++){
        result[i]=suffix[i]*prefix[i];
        cout<<result[i]<<" ";
    }
    
}


// now here we reducing the space complexity of the declared unnecessary array in third approach
// here is the minimum approach where space complexity is also managed
int fourthapproach(int arr[],int size){
    int ans[size];
     ans[0]=1;
    for(int i=1;i<size;i++){
        ans[i] =ans[i-1]*arr[i-1];
    }

    int suffix=1;
    for(int i=size-2;i>=0;i--){
        ans[i] *=suffix;
        suffix *= arr[i+1];
    }
    for(int i=0;i<size;i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    int arr[]={1,2,3,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    fourthapproach(arr,size);
    return 0;
}