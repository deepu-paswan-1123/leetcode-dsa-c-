/*
You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

Return the single element that appears only once.

Your solution must run in O(log n) time and O(1) space.

 

Example 1:

Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2
Example 2:

Input: nums = [3,3,7,7,10,11,11]
Output: 10
 

Constraints:

1 <= nums.length <= 105
0 <= nums[i] <= 105
*/

#include<iostream>
using namespace std;

// here comparison is half in the wors case n/2 so its time complexity is O(n)
int firstapproach(int arr[],int size){
    int i=0;
    while(i<size){
        if(arr[i] == arr[i+1]){
            i=i+2;
        }else{
            cout<<arr[i]<<endl;
            i++;
            return arr[i];
        }
    }
    return arr[i];
}



int binaryapproach(int arr[],int size){
    int start=0;
    int end=size-1;

    if(size==1){
        return arr[0];
    }

    while(start <= end){
        int mid = start + (end-start)/2;
        
        if(mid==0 && arr[0] !=arr[1]){
            return arr[mid];
        }

        if(mid==size-1 && arr[size-1] != arr[size-2]){
            return arr[mid];
        }

        if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]){
            cout<<"this is the unique element in the array "<<arr[mid]<<endl;
            return arr[mid];
        }

        if(mid % 2==0){
            if(arr[mid] == arr[mid+1]){
               start=mid+2;
            }else{
                end=mid-1;
            }
        }else{
            if(arr[mid]== arr[mid-1]){
                start=mid+1;

            }else{
                end=mid-1;
            }
        }
    }
}

int secondapproach(int arr[],int size){

}

int main(){
    int arr[]={1,1,2,2,3,3,4,4,8,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    // firstapproach(arr,size);
    int res=binaryapproach(arr,size);
    cout<<res;
    return 0;
}