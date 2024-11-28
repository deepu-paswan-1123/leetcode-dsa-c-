#include<iostream>
using namespace std;

// here mid is in actually the maximum distribution of pages means to say pages can not be more than the
// mid so here mid is showing the max limit of pages distibution
// mid=maxallowedpages
// bool isvalid(int arr[], int size,int student,int maxallowedpages){
//     int students=1;
//     int pages=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]>maxallowedpages){
//             return false;
//         }
//         if(pages + arr[i] <= maxallowedpages){
//             pages += arr[i];

//         }else{
//             students++;
//             pages=arr[i];
//         }
//     }

//     return students > student ? false : true;
// }

// int BookAllocate(int arr[],int size,int student){

//     if(student>size){
//         return -1;
//     }

//     int sum=0;
//     for(int i=0;i<size;i++){
//         sum +=arr[i];
//     }
//     int ans=-1;
//     int start=0;
//     int end=sum;

//     while(start <= end){
//         int mid = start +(end-start)/2;
//         if(isvalid(arr,size,student,mid)){//left search minimum pages answer
//             ans=mid;
//             end=mid-1;
//         }else{//right
//             start=mid+1;
//         }
//     }

//     return ans;

// }

bool isvalid(int arr[],int size,int student,int maxallowedpages){
    int students=1;
    int pages=0;

    for(int i=0;i<size;i++){
        if(arr[i]>maxallowedpages){
            return false;
        }

        if(arr[i]+pages <= maxallowedpages){
            pages += arr[i];
        }else{
            students++;
            pages=arr[i];
        }
    }
    return students > student ? false:true;
}

int bookAllocation(int arr[],int size,int student){
    int sum=0;
    for(int i=0;i<size;i++){
        sum +=arr[i];
    }
    int start=0;
    int end=sum;
    if(student > size){
        return -1;
    }
    int ans=-1;
    while(start <= end){
        int mid = start + (end-start)/2;
        if(isvalid(arr,size,student,mid)){
            ans=mid;
            end=mid-1;
        }else{
            start = mid+1;
        }
    }
}

int main(){
    // int arr[]={2,1,3,4};
    int arr[]={15,17,20};
    int size=sizeof(arr)/sizeof(arr[0]);
    int student=2;
    // cout<<BookAllocate(arr,size,student)<<endl;
    cout<<bookAllocation(arr,size,student)<<endl;
    return 0;
}