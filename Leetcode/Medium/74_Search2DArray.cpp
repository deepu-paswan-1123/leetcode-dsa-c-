/*
 74. Search a 2D Matrix
Medium
Topics
Companies
You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.

 

Example 1:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
Example 2:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 100
-104 <= matrix[i][j], target <= 104
*/

#include<iostream>
#include<vector>
using namespace std;

// bool SearchInRow(vector<vector<int>> matrix,int target,int midRow){
//     int n=matrix[0].size();
//     int start=0;
//     int end=n-1;
//     while(start <= end){
//         int mid = start + ((end-start)/2);
//         if(target == matrix[midRow][mid]){
//             return true;
//         } else if (target > matrix[midRow][mid]){
//             start=mid+1;
//         }else{
//             end=mid-1;
//         }
//     }
//     return false;
// }

// bool BinarySearh(vector<vector<int>> matrix,int target){
//     int m=matrix.size();  //m=3
//     int n=matrix[0].size(); 
//     int startRow=0;
//     int endRow=m-1;

//     while(startRow <= endRow){
//         int midRow=startRow + ((endRow-startRow)/2);
//         if(target >= matrix[midRow][0] && target <= matrix[midRow][n-1]){
//             return SearchInRow(matrix,target,midRow);
//         }else if (target >= matrix[midRow][n-1]){
//             startRow=midRow+1;
//         }else{
//             endRow = midRow -1;
//         }
//     }
//     return false;
// }

bool SearchInRow(vector<vector<int>> matrix,int target,int midRow){
    int n=matrix[0].size();
    int start=0;
    int end=n-1;
    while(start <= end){
        int mid=start+((end-start)/2);
        if(target == matrix[midRow][mid]){
            return true;
        }else if (target > matrix[midRow][mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return false;
}

bool BinarySearch(vector<vector<int>> matrix,int target){
    int m=matrix.size();
    int n=matrix[0].size();

    int startRow=0;
    int endRow=m-1;

    while(startRow <= endRow){
        int midRow=startRow + ((endRow-startRow)/2);
        if(target >= matrix[midRow][0] && target <= matrix[midRow][n-1]){
            return SearchInRow(matrix,target,midRow);
        }else if (target > matrix[midRow][n-1]){
            startRow=midRow+1;

        }else{
            endRow=midRow-1;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> matrix={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target=30;
    if(BinarySearch(matrix,target)){
        cout<<"the given element does exist in the matrix "<<endl;
    }else{
        cout<<"the given element does not exist in the matrix "<<endl;
    }
    return 0;
}