#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int subarraycount(vector<int> arr,int target){
    int n=arr.size();
    int count=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            if(sum == target){
                count++;
            }
        }
    }
    return count;
}

int countsumarray(vector<int> arr,int target){
    int n=arr.size();
    int count=0;
    vector<int> prefixSum(n,0);
    unordered_map<int,int> m;

    prefixSum[0]=arr[0];
    for(int i=1;i<n;i++){
        prefixSum[i]=prefixSum[i-1]+arr[i];
    }

    for(int j=0;j<n;j++){
        if(prefixSum[j]==target) count++;

        int val=prefixSum[j]-target;
        if(m.find(val) != m.end()){
            count += m[val];
        }
        if(m.find(prefixSum[j]) == m.end()){
            m[prefixSum[j]] == 0;
        }
    }

}

int main(){
    vector<int> arr={9,4,20,3,10,5};
    int target=33;
    cout<<"this is count of target exists in the array "<<subarraycount(arr,target)<<endl;
    return 0;
}

/*
{9,4,20,3,10,5}
psum[0]=9 psum[0]=arr[0];
for(int i=1;i<n;i++){
    psum[1]=psum[0]+arr[1];
    psum[1]=9+4
    psum[1]=13;
    psum[2]=psum[2-1]+arr[2];
    psum[2]=psum[1]+arr[2]
    psum[2]=13+20;
    psum[2]=33;
    psum[3]=psum[3-1]+arr[3];
    psum[3]=psum[2]+arr[3];
    psum[3]=33+3;
    psum[3]=36
    psum[4]=46;
    psum[5]=49;
    prefixSum={9,13,33,36,46,49}

}
*/

/*
    
    for(int j=0;j<n;j++){
        if(psum[j]==k)count++;
        int val=psum[j]-k;
        val=9-33;
        val=26;
        val=4-33;
        val=28;
    }
*/