/*
Given an array nums of distinct integers, return all the possible 
permutations
. You can return the answer in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
Example 2:

Input: nums = [0,1]
Output: [[0,1],[1,0]]
Example 3:

Input: nums = [1]
Output: [[1]]
 

Constraints:

1 <= nums.length <= 6
-10 <= nums[i] <= 10
All the integers of nums are unique.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// here time complexity is O(n!*n) and space complexity is O(n)
void Permutation(vector<int>& arr,vector<vector<int>>& ans,int idx){
    if(idx == arr.size()){
        ans.push_back(arr);
        for(auto val: arr){
            cout<<val<<" ";
        }
        cout<<endl;
        return;
    }

    for(int i=idx;i<arr.size();i++){
        swap(arr[idx],arr[i]); //swaping step
        Permutation(arr,ans,idx+1);
        swap(arr[idx],arr[i]); //backtracking step
    }
}

int main(){
    vector<int> arr={1,2,3};
    vector<vector<int>> ans;
    Permutation(arr,ans,0);
    return 0;
}