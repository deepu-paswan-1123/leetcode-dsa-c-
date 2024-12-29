/*
Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the 
frequency
 of at least one of the chosen numbers is different.

The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.

 

Example 1:

Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
Explanation:
2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
7 is a candidate, and 7 = 7.
These are the only two combinations.
Example 2:

Input: candidates = [2,3,5], target = 8
Output: [[2,2,2,2],[2,3,3],[3,5]]
Example 3:

Input: candidates = [2], target = 1
Output: []
 

Constraints:

1 <= candidates.length <= 30
2 <= candidates[i] <= 40
All elements of candidates are distinct.
1 <= target <= 40
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

void helper(vector<int>& arr,int i,vector<int>& combination,vector<vector<int>>& ans,int target,set<vector<int>>& s){
    int n=arr.size();
    
    //here discuss about the base cases
    if(i==n){
        return;
    }

    if(target < 0){
        return;
    }

    if(target==0){
        if(s.find(combination) == s.end()){
            ans.push_back(combination);
            s.insert(combination);
        }
        return;
    }

    combination.push_back(arr[i]);
    helper(arr,i+1,combination,ans,target-arr[i],s); //first choice here i include the element once
    helper(arr,i,combination,ans,target-arr[i],s); //second chice here i include element multiple times
    combination.pop_back(); //backtracking for excluding the element
    helper(arr,i+1,combination,ans,target,s);

}

vector<vector<int>> combinationSum(vector<int>& arr, int target) {
    vector<int> combination;
    vector<vector<int>> ans;
    set<vector<int>>s;
    helper(arr,0,combination,ans,target,s);
    return ans;
}

int main(){
    vector<int> candidate= {2,3,6,7};
    int target = 8;
    vector<vector<int>> res=combinationSum(candidate,target);
    for(auto val:res){
        for(auto val1:val){
            cout<<val1<<" ";
        }
        cout<<endl;
    }    
    return 0;
}