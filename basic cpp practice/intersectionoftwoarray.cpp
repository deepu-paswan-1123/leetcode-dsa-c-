#include<iostream>
using namespace std;

void interesectionarray(int arr1[],int arr2[],int size1,int size2){
    bool printed[1000]={false};

    for(int i=0; i< size1 ;i++){
        bool iscommon=false;
        for(int j=0;j<size2;j++){
            if(arr1[i] == arr2[j]){
                iscommon=true;
                break;
            }
        }

        if(iscommon && !printed[arr1[i]]){
            cout<<arr1[i]<<" ";
            printed[arr1[i]]=true;
        }
    }
}

int main(){
    int arr1[]={4,5,3,1,4};
    int arr2[]={4,5,9,8,3};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);

    interesectionarray(arr1,arr2,size1,size2);

    return 0;
}