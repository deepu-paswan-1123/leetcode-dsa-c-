#include<iostream>
#include<vector>
using namespace std;

int uniquevector( vector<int> &num,int size){
    int res=0;
    for(int val:num){
        res=res^val;

    }
    return res;
}

int main(){
    vector <int> vec={1,2,3,2,3};
    cout<<uniquevector(vec,vec.size());
    
    return 0;
}