#include<iostream>
using namespace std;

// first way to reverse an array values *****************************
// void reversearray(int arr[],int size){
//     int temp;
//     for (int i = 0; i < size / 2; i++) {
//         // Swapping elements at index i and (size - i - 1)
//         temp = arr[i];
//         arr[i] = arr[size - i - 1];
//         arr[size - i - 1] = temp;
//     }
    
// }

// second way to reverse the array values ****************************
void reversearray(int arr[],int size){
    int start=0;
    int end=size-1;
    int temp;
    while(start < end){
        temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }

}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size=end(arr)-begin(arr);
    reversearray(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}