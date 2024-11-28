// #include<iostream>
// #include<climits>
// using namespace std;

// // here max sub array find using the time complexity is O(n3);
// int maxsubarray(int arr[],int size){
//     for(int start=0;start<size;start++){
//         for(int end=start;end<size;end++){
//             for(int i=start;i<=end;i++){
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }


// // this method of solve the sum of maxsum of subarray by bruete force approach and here time complexity
// // is O(n2) but we can find it by most optimized by the help of kadane algorithm
// int maxsumsubarray(int arr[],int size){
//     int maxsum=INT_MIN;
//     for(int start=0;start<size;start++){
//         int currentsum=0;
//         for(int end=start;end<size;end++){
//             currentsum +=arr[end];
//             maxsum=max(currentsum,maxsum);
//         }
//     }

//     cout<<"maximum sum of subarray in array "<<maxsum<<endl;
// }

// // now we are going to calculate the maxsum of subarray by kadane algorithm which
// // time complexity is O(n) which is most optimized problem soln.

// int kadanemaxsumsubarray(int arr[],int size){
//     int maxsum=INT_MIN;
//     int currentsum=0;
//     for(int start=0;start<size;start++){
//         currentsum +=arr[start];
//         maxsum=max(currentsum,maxsum);
//         if(currentsum < 0){
//             currentsum=0;
//         }
//     }
//     cout<<"maximum sum of subarray of an array "<<maxsum<<endl;
// }

// int main(){
//     int arr[]={-1,-2,-3,-4,-5};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     maxsubarray(arr,size);
//     maxsumsubarray(arr,size);
//     kadanemaxsumsubarray(arr,size);
//     return 0;
// }


#include<iostream>
#include<climits>
using namespace std;
// O(n3)-time complexity
int maxsubarr(int arr[],int size){
    for(int start=0;start<size;start++){
        for(int end=start;end<size;end++){
            for(int i=start;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}

// now discuss the code about the max sum of  subarray in an array
// first approach apply that is bruete force approach
// time complexity that is O(n2)
int maxsumsubarr(int arr[],int size){
    int maxsum=INT_MIN;
    for(int start=0;start<size;start++){
        int currentsum=0;
        for(int end=start;end<size;end++){
            currentsum +=arr[end];
            maxsum=max(currentsum,maxsum);
        }
    }
    cout<<"the max sum of an subarray is "<<maxsum<<endl;
}
// by the kadane algorithm solve within O(n) time complexity

// this is the not best solution for the maxsub array sum there is one more approach for that by which we can
// find it minimize solution and with O(nlogn) which better time complexity as compared to O(n);

int kadanesumarr(int arr[],int size){
    int maxsum=INT_MIN;
    int currentsum=0;
    for(int start=0;start<size;start++){
        currentsum +=arr[start];
        maxsum=max(currentsum,maxsum);
        if(currentsum<0){
            currentsum=0;
        }
    }
    cout<<"the max sum of subarray in an array is "<<maxsum<<endl;
}



int first(int arr[],int size){
    for(int start=0;start<size;start++){
        for(int end=start;end<size;end++){
            for(int i=start;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}

int sumfirst(int arr[],int size){
    int maxsum=INT_MIN;
    for(int start=0;start<size;start++){
        int sum=0;
        for(int end=start;end<size;end++){
            sum +=arr[end];
            maxsum=max(maxsum,sum);
        }
    }
    cout<<maxsum;
}

int thirdkadande(int arr[],int size){
    int maxsum=INT_MIN;
    int currentsum=0;
    for(int start=0;start<size;start++){
        currentsum +=arr[start];
        maxsum=max(maxsum,currentsum);
        if(currentsum <0){
            currentsum=0;
        }
    }
    cout<<maxsum;   
}

int main(){
    int arr[]={1,2,3,4,5};
    int size=end(arr)-begin(arr);
    int maxnosubarray;
    int n=end(arr)-begin(arr);
    // maxnosubarray = (n*(n+1)/2);
    // cout<<maxnosubarray<<endl;
    // maxsubarr(arr,size);
    // maxsumsubarr(arr,size);

    // kadanesumarr(arr,size);
    // first(arr,size);
    // sumfirst(arr,size);
    thirdkadande(arr,size);

    return 0;
}