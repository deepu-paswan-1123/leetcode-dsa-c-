/*
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
Example 2:

Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.
Example 3:

Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.
 

Constraints:

3 <= nums.length <= 3000
-105 <= nums[i] <= 105

*/

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

// this code give the error of tle
void threeSum(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(),nums.end());
    bool found=false;
    for (int i = 0; i < n-2; i++) {
        if(i>0 && nums[i] == nums[i-1]) continue;
        for (int j = i + 1; j < n-1; j++) { 
            if(j>i+1 && nums[j]==nums[j-1]) continue;
            for (int k = j + 1; k < n; k++) { 
                if(k>j+1 && nums[k]==nums[k-1]) continue;
                if (nums[i] + nums[j] + nums[k] == 0) {
                    cout << nums[i] << " " << nums[j] << " " << nums[k] << endl;
                    found = true;
                }
            }
        }
    }
    if(!found){
        cout<<"[]"<<endl;
    }
}

// now reduce ther time complexity here
vector<vector<int>> threesum(vector<int> nums){
    int n=nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        int a=nums[i];
        int k=-a;
        int start=i+1;
        int end=n-1;
        while(start < end){
            if(nums[start] + nums[end]==k){
                ans.push_back({nums[start],nums[end],nums[i]});
                while(start < end && nums[start]==nums[start+1]) start++;
                while(start < end && nums[end]== nums[end-1]) end--;
                start++;
                end--;
            }else if(nums[start]+nums[end]>k){
                end--;
            }else{
                start++;
            }
        }
        while(i+1<n && nums[i]== nums[i+1]) i++;
    }
    return ans;
}

// three sum proble with optimize soln
vector<vector<int>> Threesum(vector<int> arr,int target){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        int a=arr[i];
        int k=-a;
        int start=0;
        int end=n-1;
        while(start<end){
            if(arr[start]+arr[end]==k){
                ans.push_back({arr[start],arr[end],arr[i]});
                while(start < end && arr[start]==arr[start+1])start++;
                while(start < end && arr[end]==arr[end-1])end--;
                start++;
                end--;
            }else if(arr[start]+arr[end] <k){
                start++;
            }else{
                end--;
            }
        }
        while(i<n && arr[i]==arr[i+1]) i++;
    }
    return ans;
}

int main() {
    vector<int> nums = {1,0,1};
    vector<vector<int>> res=threesum(nums);
    for (const vector<int>& val : res) {
        for (int x : val) {
            cout << x << " ";
        }
        cout << endl;  // Add a newline between each triplet
    }
    return 0;
}
