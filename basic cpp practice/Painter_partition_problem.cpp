#include<iostream>
#include<climits>
using namespace std;


int isvalid(int arr[],int size,int painter,int mid){
    int painters=1;
    int time=0;
    for(int i=0;i<size;i++){
        if(arr[i]>mid){
            return false;
        }
        if(arr[i]+time <= mid){
            time +=arr[i];
        }else{
            painters++;
            time=arr[i];
        }
    }
    return painters > painter?false:true;
}

int partition(int arr[],int size,int painter){
    int sum=0;
    int maxlen=INT_MIN;
    if(painter > size){
        return -1;
    }
    for(int i=0;i<size;i++){
        sum +=arr[i];
        maxlen=max(maxlen,arr[i]);
    }
    int start=maxlen;
    int end=sum;
    int ans=-1;
    while(start <= end){
        int mid=start + (end-start)/2;
        if(isvalid(arr,size,painter,mid)){
            ans=mid;
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[]={40,30,10,20};
    int size=end(arr)-begin(arr);
    int painter=2;
    cout<<partition(arr,size,painter)<<endl;
    return 0;
}