/*
 Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.
 

Example 1:


Input: matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}}, target = 5
Output: true
Example 2:


Input: matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}}, target = 20
Output: false
 

Constraints:

m == matrix.length
n == matrix{i}.length
1 <= n, m <= 300
-109 <= matrix{i}{j} <= 109
All the integers in each row are sorted in ascending order.
All the integers in each column are sorted in ascending order.
-109 <= target <= 109
*/

#include<iostream>
#include<vector>
using namespace std;

// bool BinarySearch(vector<vector<int>> matrix,int target){
//     int m=matrix.size();
//     int n=matrix[0].size();

//     int r=0;
//     int c=n-1;

//     while(r<m && c >=0){
//         if(target == matrix[r][c]){
//             return true;
//         }else if(target >= matrix[r][c]){
//             r++;
//         }else{
//             c--;
//         }
//     }
//     return false;

// }

int BinarySearch(vector<vector<int>> matrix,int target){
    int m=matrix.size();
    int n=matrix[0].size();
    int r=0;
    int c=n-1;
    while(r<m && c >=0){
        if(target == matrix[r][c]){
            return true;
        }else if(target > matrix[r][c]){
            r++;
        }else{
            c--;
        }
    }
    return false;

}//this time complexity is O(m+n);

int main(){
    vector<vector<int>> matrix={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target=5;
    if(BinarySearch(matrix,target)){
        cout<<"this given element does exist in the matrix "<<endl;

    }else{
        cout<<"this given element does not exist in the matrix "<<endl;
    }
    return 0;
}

