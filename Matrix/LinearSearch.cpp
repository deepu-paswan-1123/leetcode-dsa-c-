#include<iostream>
using namespace std;

pair<int,int> LinearSearch(int matrix[3][3],int rows,int cols,int searchval){
   
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(matrix[i][j]==searchval){
                return{i,j};
            }
        }
    }
    return {-1,-1};
}

int main(){
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};   
    int rows=3;
    int cols=3;
    int searcval=5;
    pair<int,int> result=LinearSearch(matrix,rows,cols,searcval);
    if(result.first == -1 && result.second == -1){
        cout<<"the given value does not exist in the matrix "<<searcval<<endl;
    }else{
        cout<<"this given value does exist in the matrix at index "<<result.first<<" "<<result.second<<endl;
    }
    
    return 0;
}