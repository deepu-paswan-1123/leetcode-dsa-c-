/*
    here we are discussing about the binary search in an array which time complexity is O(logn)
    that means it is effcient algorithm to search an element in the array which is better than
    linear search but there are some codition in it because the array should be sorted in this
    case either ascending or descending
*/


#include<iostream> 
using namespace std;

int findvalueinarray(int arr[],int size,int target){
    int start=0;
    int end=size-1;

    while(start <= end){
        /*
            here in this formula there is one problem if we solve the question by this formula that means
            we exceed the limit for large array suppase the array is very large so in this condition 
            my start may be INT_MAX AND end alse INT_MAX. so when we add start + end
            then it will be overflow so instead of this we use this formula
            int mid=start+{(start-mid)/2}

        */
        // int mid=(start+end)/2;
        int mid = start + (end-start)/2;  
        if(arr[mid] < target){
            start=mid+1;
        }

        else if(arr[mid] > target){
            end=mid-1;
        }
        else{
            cout<<"the given element is exist in the array "<<arr[mid]<<endl;
            return mid;
        }

        
    }
    
    
    cout<<"the element not exist in the array "<<target<<endl;
    return -1;
}

// search target through the sorted array by recursion
/*
    here one thing remeber in both search iterative and recursion time complexity is same but
    space complexity is different iterative has O(1) space complexity and recursion has 
    O(logn) space complexity so iterative approach is better as compared to recursion
    approach.
*/

int searctargetrecursion(int arr[],int size,int start,int end,int target){
    if(start <= end){
        int mid=start + (end-start)/2;
        if(arr[mid]<target){
           return searctargetrecursion(arr,size,mid+1,end,target);
        }
        else if (arr[mid] > target){
            return searctargetrecursion(arr,size,start,mid-1,target);
        }
        else{
            cout<<"the given element is exist in the array at index "<<mid<<" and the value is "<<arr[mid]<<endl;
            return mid;
        }
    }
    cout<<"the given element is not exist in the array "<<target<<endl;
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=6;
    int start=0;
    int end=size-1;
    // findvalueinarray(arr,size,target);
    searctargetrecursion(arr,size,start,end,target);
    return 0;
}