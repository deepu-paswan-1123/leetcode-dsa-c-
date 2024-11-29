/*
Given an integer array nums of unique elements, return all possible 
subsets
 (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
Example 2:

Input: nums = [0]
Output: [[],[0]]
 

Constraints:

1 <= nums.length <= 10
-10 <= nums[i] <= 10
All the numbers of nums are unique.
*/

#include<iostream>
#include<vector>
using namespace std;

void getallsubset(vector<int>& arr,vector<int>& ans,int i,vector<vector<int>> allsubset){
    if(i == arr.size()){
        //store subset;
        allsubset.push_back({ans});
        return;
    }
    //include element
    ans.push_back(arr[i]);
    getallsubset(arr,ans,i+1,allsubset);

    //exclude by backtracking
    ans.pop_back();
    getallsubset(arr,ans,i+1,allsubset);

}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> allsubset;
    vector<int> ans;
    int i=0;  
    getallsubset(nums,ans,i,allsubset);
}

int main(){
    vector<int> arr={1,2,3};
    subsets(arr);
    return 0;
}