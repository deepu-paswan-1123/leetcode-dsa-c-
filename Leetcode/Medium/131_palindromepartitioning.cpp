/*
Given a string s, partition s such that every 
substring
 of the partition is a 
palindrome
. Return all possible palindrome partitioning of s.

 

Example 1:

Input: s = "aab"
Output: [["a","a","b"],["aa","b"]]
Example 2:

Input: s = "a"
Output: [["a"]]
 

Constraints:

1 <= s.length <= 16
s contains only lowercase English letters.
*/

#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;

bool ispalind(string s){
    string s2=s;
    reverse(s2.begin(),s2.end());

    return s==s2;
}

void getAllParts(string s,vector<vector<string>>& ans,vector<string>& partitions){
    if(s.size()==0){
        ans.push_back(partitions);
        return;
    }
    for(int i=0;i<s.size();i++){
        string part = s.substr(0,i+1);
        if(ispalind(part)){
            partitions.push_back(part);
            getAllParts(s.substr(i+1),ans,partitions);
            partitions.pop_back();
        }
    }
}

vector<vector<string>> partition(string s) {
    vector<vector<string>> ans;
    vector<string> partitions;
    getAllParts(s,ans,partitions);
    return ans;
}

int main(){
    string s = "aab";
    vector<vector<string>> res=partition(s);
    for (const auto& partition : res) {
        cout << "[";
        for (size_t i = 0; i < partition.size(); ++i) {
            cout << "\"" << partition[i] << "\"";
            if (i < partition.size() - 1) {
                cout << ", ";
            }
        }
        cout << "] ";
    }
    cout << endl;
    return 0;
}