#include<iostream>
#include<climits>
using namespace std;

// int main(){
//     int arr[5] = {56,75,98,100,34};
//     // for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
//     //     cout<<i<<" "<<arr[i]<<endl;
//     // }
//     // cout<<endl;
//     // for(int i=0;i<end(arr)-begin(arr);i++){
//     //     cout<<i<<" "<<arr[i]<<endl;
//     // }


//     // int smallest=INT_MAX;
//     // int indexOfMin=-1;
//     // for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
//     //     if(arr[i]<smallest){
//     //         smallest=arr[i];
//     //         indexOfMin=i;
//     //     }
//     // }
//     // cout<<"smallest value in the array "<<smallest<<endl;
//     // cout<<"index of smallest number is "<<indexOfMin;
//     // cout<<endl;

//     // int largest=INT8_MIN;
//     // for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
//     //    if(largest<arr[i]){
//     //     largest=arr[i];
//     //    }
//     // }
//     // cout<<"largest value in the array "<<largest;
//     // cout<<endl;

//     // now above if condition can be handle with the help of min and max inbuilt function in cpp
//     // this is an example of the larges value in array by the max function
//     // int largest=INT8_MIN;
//     // for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
//     //    largest=max(arr[i],largest);
       
//     // }
//     // cout<<"largest value in the array "<<largest;
//     // cout<<endl;

//     // // this is an example of the smallest value in the array by the min function
    
//     // int smallest=INT8_MAX;
//     // int indexOfMin=-1;
//     // for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
//     //     int newsmallest = min(arr[i],smallest);
//     //     if(newsmallest !=smallest){
//     //         smallest=newsmallest;
//     //         indexOfMin=i;
//     //     }
//     // }
//     // cout<<"smallest value in the array "<<smallest<<endl;
//     // cout<<"index of smallest number in array is "<<indexOfMin;
//     // cout<<endl;

//     return 0;
// }








// here we are understand the call by refrence______________________________

int changearray(int arr[],int size){
    // array print in function
    cout<<"array print in the function"<<endl;
    for(int i=0;i<size;i++){
        arr[i]=2*arr[i];
        cout<<" "<<arr[i];
    }
}

int main(){
    int arr[]={1,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    changearray(arr,size);
    cout<<endl;
    cout<<"array print in the main"<<endl;
    for(int i=0;i<size;i++){
        cout<<" "<<arr[i];
    }
    return 0;
}