/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].*/


#include<iostream>
#include<vector> 
#include<typeinfo>
#include<unordered_map>
using namespace std;

// its working on the O(n2) time complexity
void sumindex(vector<int>vec,int size,int target){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(vec[i]+vec[j]==target){
                cout<<"this is the index of target ["<<i<<" "<<j<<"]";
                return ;
            }
        }
    }
}



// this is method which have less then O(n2) time complexity
// and it is done by the inbuilt method of stl unordered_map
int sumindexother(vector<int>vec,int size,int target){
    // hash_map[0]=23;  value store at 0 index 
    unordered_map<int,int>hash_map;
    for(int i=0;i<size;i++){
        int complement=target-vec[i];
        if(hash_map.find(complement) != hash_map.end()){

            cout << "Indices: [" << hash_map[complement] << ", " << i << "]" << endl;
            // return {hash_map[complement], i};
        }
        hash_map[vec[i]] = i;
    }
}

// &&&&&&&&&&&&&&& here important note for this question actually in this question one plus point c
// can also be add the array can be sort and in this situation we can also apply the two pointer a
// approach and solve the question in which we return the index of an array which sum is equal to
// the target and this time complexity is also the O(n) but there is necessary conditio in that 
// array should be sorted
// now below function is the two pointer apprach function

vector<int> pointersumarr(vector <int> vec,int size,int target){
    vector <int> ans;
    int i=0;
    int j=size-1;
    while(i<j){
        if(vec[i]+vec[j]<target){
            i++;
        }
        else if(vec[i]+vec[j]>target){
            j--;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main(){
    vector<int>vec={2,7,11,15};
    int target=18;
    int size=vec.size();
    vector<int> res = pointersumarr(vec,size,target);
    
    cout<<"[ ";
    for(int index : res){
        cout<<index<<" ";
    }
    cout<<"]";
    return 0;
}