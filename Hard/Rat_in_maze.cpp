#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

void helper(vector<vector<int>>& mat,int r,int c,vector<string>& ans,string path,vector<vector<bool>>& vis){
    int n=mat.size();

    if(r<0 || c<0 || r >= n || c >= n || mat[r][c]==0 || vis[r][c]==true){
        return;
    }

    //ans
    if(r==n-1 && c==n-1){
        ans.push_back(path);
        return;
    }
    
    //visit the cell for true
    vis[r][c]=true;
    //down
    helper(mat,r+1,c,ans,path+"D",vis);

    //left
    helper(mat,r,c-1,ans,path+"L",vis);

    //right
    helper(mat,r,c+1,ans,path+"R",vis);

    //up
    helper(mat,r-1,c,ans,path+"U",vis);

    //for backtracking make all the visit path as false
    vis[r][c]=false;

}

vector<string> findpath(vector<vector<int>>& mat){
    int n=mat.size();
    vector<string> ans;
    string path="";
    vector<vector<bool>> vis(n,vector<bool>(n,false));
    helper(mat,0,0,ans,path,vis);
    return ans;
}

int main(){
    vector<vector<int>> mat={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};

    vector<string> ans = findpath(mat);
    for(string path:ans){
        cout<<path<<endl;
    }
    return 0;
}