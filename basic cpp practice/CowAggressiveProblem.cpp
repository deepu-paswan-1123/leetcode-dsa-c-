// #include<iostream>
// #include<climits>
// using namespace std;

// int isvalid(int arr[],int size,int cow,int mid){
//     int cows=1;
//     int distance=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]>mid){
//             return false;
//         }
//         if(arr[i]+distance <= mid){
//             distance +=arr[i];
//         }else{
//             cows++;
//             distance=arr[i];
//         }
//     }
//     return cows>cow?false:true;
// }

// int Cowproblem(int arr[],int size,int cow){
//     int sum=0;
//     int maxcow=INT_MIN;
//     for(int i=0;i<size;i++){
//         sum +=arr[i];
//         maxcow = max(maxcow,arr[i]);
//     }
//     int start=maxcow;
//     int end=sum;
//     int ans=-1;
//     while(start <= end){
//         int mid = start + (end-start)/2;
//         if(isvalid(arr,size,cow,mid)){
//             ans=mid;
//             end=mid-1;

//         }else{
//             start=mid+1;
//         }
//     }
//     return ans;
// }

// int main(){
//     int arr[]={1,2,8,4,9};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int cow=3;
//     cout<<Cowproblem(arr,size,cow)<<endl;
//     return 0;
// }



#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int isvalid(int arr[], int size, int cow, int mid) {//here it is the minmimum distance
    int cows = 1;
    int lastpos = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] - lastpos >= mid) {
             cows++;
            lastpos = arr[i];
        }
        if(cows==cow){
            return true;
        }
    }
    return false;
}

int Cowproblem(int arr[], int size, int cow) {
    if(cow > size){
        return -1;
    }
    sort(arr, arr + size);
    int start =0;
    int end = arr[size-1]-arr[0];
    int ans = -1;
    while (start <= end) {
        // Corrected mid calculation
        int mid = start + (end - start) / 2;
        
        if (isvalid(arr, size, cow, mid)) {
            ans = mid; // Correct ans assignment to store mid value
           start=mid+1;
        } else {
           end=mid-1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {1, 2, 8, 4, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int cow = 3;
    cout << Cowproblem(arr, size, cow) << endl;
    return 0;
}
