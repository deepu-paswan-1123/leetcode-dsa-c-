#include<iostream>
using namespace std;

int PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int InserSort(int arr[],int size){

    for(int i=1;i<size;i++){
        int current=arr[i];
        int prev=i-1;

        while(prev >= 0 && arr[prev]>current){
            arr[prev+1]=arr[prev];
            prev--;
        }

        arr[prev+1]=current;

    }

}

int main(){
    int arr[]={2,1,4,5,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    InserSort(arr,size);
    PrintArray(arr,size);
    return 0;
}