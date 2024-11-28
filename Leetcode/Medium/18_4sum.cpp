/*
    Given an array nums of n integers, return an array of all the unique quadruplets {nums{a}, nums{b}, nums{c}, nums{d}} such that:

0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums{a} + nums{b} + nums{c} + nums{d} == target
You may return the answer in any order.

 

Example 1:

Input: nums = {1,0,-1,0,-2,2}, target = 0
Output: {{-2,-1,1,2},{-2,0,0,2},{-1,0,0,1}}
Example 2:

Input: nums = {2,2,2,2,2}, target = 8
Output: {{2,2,2,2}}
 

Constraints:

1 <= nums.length <= 200
-109 <= nums{i} <= 109
-109 <= target <= 109
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n=nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    for(int i=0 ;i<n;i++){
        if(i>0 && nums[i] == nums[i-1]) continue;
        int first=nums[i];
        for(int j=i+1;j<n;j++){
            if(j>i+1 && nums[j]==nums[j-1]) continue;
            int second=nums[j];
            int third=nums[j+1];
            int fourth=nums[n-1];
            while(third<fourth){
                if(third<fourth && third == third+1) continue;
                if(third<fourth && fourth == fourth-1) continue;
                if(first+second+third+fourth == target){
                    ans.push_back({first,second,third,fourth});
                    fourth--;
                    third++;
                }else if (first+second+third+fourth > target){
                    fourth--;
                }else{
                    third++;
                }
                
            }
        }
    }
    return ans;

}

int main(){
    vector<int> nums={1,0,-1,0,-2,2};
    int target=0;
    vector<vector<int>> res=fourSum(nums,target);
    for(auto val:res){
        for(auto val1:val){
            cout<<val1<<" ";
        }
        cout<<endl;
    }
    return 0;
}