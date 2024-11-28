#include<iostream>
#include<climits>
using namespace std;

void swapminandmax(int arr[],int size){
    int largest=INT_MIN;
    int smallest=INT_MAX;
    int indexOfMin=-1;
    int indexOfMax=-1;
    int temp;
    for(int i=0;i<size;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
            indexOfMin=i;
        }
        if(arr[i]>largest){
            largest=arr[i];
            indexOfMax=i;
        }
        
    }

    temp=arr[indexOfMin];
    arr[indexOfMin]=arr[indexOfMax];
    arr[indexOfMax]=temp;

    cout<<"the index of minimum value in array is "<<indexOfMin<<endl;
    cout<<"the index of maximum value in array is "<<indexOfMax<<endl;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={100,76,3,4,5,45,7,8};
    int size=end(arr)-begin(arr);
    swapminandmax(arr,size);
    return 0;
}