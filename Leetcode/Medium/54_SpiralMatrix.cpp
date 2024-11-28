/*
    Given an m x n matrix, return all elements of the matrix in spiral order.

 

Example 1:


Input: matrix = {{1,2,3},{4,5,6},{7,8,9}}
Output: {1,2,3,6,9,8,7,4,5}
Example 2:


Input: matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}}
Output: {1,2,3,4,8,12,11,10,9,5,6,7}
 

Constraints:

m == matrix.length
n == matrix{i}.length
1 <= m, n <= 10
-100 <= matrix{i}{j} <= 100
*/


#include<iostream>
#include<vector>
using namespace std;

void spiralTraversal(vector<vector<int>> matrix){
    int m=matrix.size();
    int n=matrix[0].size();
    int srow=0;
    int erow=m-1;
    int scol=0;
    int ecol=n-1;

    while(srow <= erow && scol <= ecol){
        for(int i=scol;i<=ecol;i++){
            cout<<matrix[srow][i]<<" ";
        }
        for(int i=srow+1;i<=erow;i++){
            cout<<matrix[i][ecol]<<" ";
        }
        for(int i=ecol-1;i>=scol;i--){
            if(srow == erow){
                break;
            }
            cout<<matrix[erow][i]<<" ";
        }
        for(int i=erow-1;i>=srow+1;i--){
            if(scol == ecol){
                break;
            }
            cout<<matrix[i][scol]<<" ";
        }
        srow++;
        erow--;
        scol++;
        ecol--;
    }
}

int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    spiralTraversal(matrix);
    return 0;
}