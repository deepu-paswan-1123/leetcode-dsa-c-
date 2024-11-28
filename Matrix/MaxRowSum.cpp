#include<iostream>
#include<climits>
using namespace std;

int LinearSearch(int matrix[3][3],int rows,int cols){
    int maxRowSum=INT_MIN;
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
            sum +=matrix[i][j];
        }
        maxRowSum= max(maxRowSum,sum);
    }
    return maxRowSum;
}

int main(){
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};   
    int rows=3;
    int cols=3;
    int result=LinearSearch(matrix,rows,cols);
    cout<<result<<endl;
    return 0;
}