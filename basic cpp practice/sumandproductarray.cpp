#include<iostream>
using namespace std;

void sumarray(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum +=arr[i];
    }
    cout<<"the sum of element in the array is "<<sum;
}

void productarray(int arr[],int size){
    int product=1;
    for(int i=0;i<size;i++){
        product *=arr[i];
    }
    cout<<"the product of elements in the array is "<<product<<endl;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size=end(arr)-begin(arr);
    // sumarray(arr,size);
    // cout<<endl;
    productarray(arr,size);
    cout<<1*2*3*4*5*6*7*8<<endl;
    return 0;
}