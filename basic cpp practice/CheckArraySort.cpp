#include<iostream>
using namespace std;

int isSort(int arr[],int n){
    if(n==0 || n==1){
        return true;
    }
    return arr[n-1]>=arr[n-2] && isSort(arr,n-1);
}

int main(){
    int arr[]={1,7,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<isSort(arr,size)<<endl;
    return 0;
}