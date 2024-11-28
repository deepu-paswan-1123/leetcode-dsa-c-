#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

// time complexity O(n2)
// vector<int> findDuplicate(vector<int> arr){
//     int n=arr.size();
//     vector<int> ans;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 ans.push_back(arr[i]);
//                 break;
//             }
//         }
//     }
//     return ans;
// }


// this code give O(n) time complexity which is good but here is one problem here it takes the 
// space complexity of O(n) in worst case but in question it is given solve it O(1) space complexity
// so here now we will use the slow-fast pointer approach which is used many times in linked list
int findDuplicate(vector<int> arr){
    unordered_set<int> s;
    for(auto val:arr){
        if(s.find(val) != s.end()){
            return val; 
        }
        s.insert(val);
    }
    return -1;
}

// here we are going to use the slow fast pointer approach time complexity O(n) and space complexity O(1)
int FindDuplicate(vector<int> arr){
    int n=arr.size();
    int slow=arr[0];
    int fast=arr[0];
    do{
        slow=arr[slow]; //its updated as +1
        fast=arr[arr[fast]]; //its updated as +2

    }while(slow != fast);
    slow=arr[0];
    while(slow != fast){
        slow=arr[slow];
        fast=arr[fast];
    }
    return slow;
}

int main(){
    vector<int> vec={1,2,3,4,3,5};
    int res=FindDuplicate(vec);
    cout<<res<<endl;
    return 0;
}