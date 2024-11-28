#include<iostream>
#include<climits>
using namespace std;

int linearsearch(int arr[],int size,int target){
    int indexOfNumeber=-1;
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            indexOfNumeber=i;
            return indexOfNumeber;
        }
    }
    return indexOfNumeber;
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int target=10;
    int size=end(arr)-begin(arr);
    
    int isexists=linearsearch(arr,size,target);

    if(isexists== -1){
        cout<<"the given number is not present in given array "<<isexists<<endl;
    }
    else{
        cout<<"the given number is present at this index of given array "<<isexists<<endl;
    }
  
    return 0;
}