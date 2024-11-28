#include<iostream>
using namespace std;

int PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int SlelctionSort(int arr[],int size){
    for(int i=0;i<size;i++){
        int smallestIndex=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[smallestIndex]){
                smallestIndex=j;
            }
        }
        swap(arr[i],arr[smallestIndex]);
    }
}

int main(){
    int arr[]={2,1,4,5,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    SlelctionSort(arr,size);
    PrintArray(arr,size);
    return 0;
}