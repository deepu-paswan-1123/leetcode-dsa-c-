#include<iostream>
using namespace std;


int main(){
    int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{4,3,7}};   
    int rows=4;
    int cols=3;
    cout<<matrix[1][1]<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}