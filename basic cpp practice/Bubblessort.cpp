#include<iostream>
using namespace std;


int BubbleSort(int arr[],int size){
    for(int i=0;i<size;i++){
        bool isSwap=false;
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
        if(!isSwap){
            return;
        }
    }
}

int PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={4,1,5,2,3};
    int size=end(arr)-begin(arr);
    BubbleSort(arr,size);
    PrintArray(arr,size);
    return 0;
}