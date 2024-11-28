#include<iostream>
using namespace std;

void unique_element(int arr[],int size){
    cout<<"unique element in the array "<<endl;
    for(int i=0;i<size;i++){
        bool isunique=true;
        for(int j=0;j<size;j++){
            if(i!=j && arr[i] ==arr[j]){
                isunique=false;
                break;
            }
        }
        if(isunique){
            cout<<arr[i]<<" ";
        }
    }
}

int main(){
    int arr[]={4,3,5,4,5,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    unique_element(arr,size);
    return 0;
}


// [4,3,5,4,5,1]
// i=0 ,j=0