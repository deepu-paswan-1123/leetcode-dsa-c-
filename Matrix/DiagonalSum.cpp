#include<iostream>
#include<climits>
using namespace std;

// this is the sum primary diagonal
int Diagonalsum(int matrix[3][3],int rows,int cols){
    int DiagSum=0;
    // int sum=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(i==j){
                DiagSum +=matrix[i][j];
            }
        }
       
    }
    return DiagSum;
}

// this is the sum secondary diagonal
int SecondaryDiagonalsum(int matrix[3][3],int rows,int cols){
    int DiagSum=0;
    // int sum=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(j==rows-i-1){
                DiagSum +=matrix[i][j];
            }
        }
       
    }
    return DiagSum;
}


/*
    here we can say there is no need of two loop we can do it with the help of one loop
*/
int TotalDiagonalSum(int matrix[3][3],int rows,int cols){
    int TotalSum=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(i==j){
                TotalSum +=matrix[i][j];
            } 
            else if(j==rows-i-1){
                TotalSum +=matrix[i][j];
            }
        }
    }
    return TotalSum;
}
/*
    optimized sum of total diagonal in the given array with one loop
*/

int Totalsum(int matrix[3][3],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum +=matrix[i][i];
        if(i != n-1-i){
            sum +=matrix[i][n-1-i];
        }
    }
    return sum;
}

int main(){
    int matrix[3][3]={{1,2,13},{4,5,6},{7,8,9}};   
    int rows=3;
    int cols=3;
    // int result=Diagonalsum(matrix,rows,cols);
    int result=Totalsum(matrix,rows);
    cout<<result<<endl;
    return 0;
}