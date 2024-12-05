/*
The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.

Given an integer n, return all distinct solutions to the n-queens puzzle. You may return the answer in any order.

Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space, respectively.

Input: n = 4
Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
Explanation: There exist two distinct solutions to the 4-queens puzzle as shown above
Example 2:

Input: n = 1
Output: [["Q"]]
 

Constraints:

1 <= n <= 9
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

bool isSafe(vector<string> board,int row ,int col,int n){
    //horizontal checking
    for(int j=0;j<n;j++){
        if(board[row][j]=='Q'){
            return false;
        }
    }
    //vectical checking
    for(int i=0;i<n;i++){
        if(board[i][col]=='Q'){
            return false;
        }
    }

    //left digonal
    for(int i=row,j=col;i>=0 && j>= 0;j--,i--){
        if(board[i][j]=='Q'){
            return false;
        }
    }

    //right digonal
    for(int i=row , j=col;i>=0 && j<n; i--,j++){
        if(board[i][j]=='Q'){
            return false;
        }
    }

    return true;
}

void NQueens(vector<string>& board,vector<vector<string>>& ans,int row,int n){
    if(row == n){
        ans.push_back(board);
        return;
    }

    for(int j=0;j<n;j++){
        if(isSafe(board,row,j,n)){
            board[row][j]='Q';
            NQueens(board,ans,row+1,n);
            board[row][j]='.';
        }
    }
    
}

int main(){
    int n=4;
    vector<string> board(n,string(n,'.'));
    vector<vector<string>> ans;
    NQueens(board,ans,0,n);
    // Print all solutions
    for (const auto& solution : ans) {
        for (const auto& row : solution) {
            cout << row << endl;
        }
        cout << endl;
    }
    return 0;
}