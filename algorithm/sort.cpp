#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int arr[]={8,4,9,3,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<*(arr)<<endl;
    sort(arr,arr+n);

    /*
        similiary sort in array we can also do sort the vector but vector do not point the starting
        point so we give the starting and ending point of the vector

        sort(vec.begin(),vec.end());
    */

    vector<int> vec={9,3,7,4};
    // sort(vec.begin(),vec.end());
    sort(vec.begin(),vec.end(),greater<int>());
    
    /*
        here we can notice the all thing that we do sort that always sort in ascending order if we want to 
        sort them in descending order then we pass extra argument that is called functor or comparator
    */
    for(auto val:vec){
        cout<<val<<" ";
    }
    cout<<endl;



    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}


/*
lets discuss about array
[1,2,3,4]
here lets discuss 
0th_index=1,
1th_index=2,
2nd_index=3,
3rd_index=4,
arr itself is a pointer which points the 0th index of an array means to say if we do derefrece directly name 
of an array then that give the that element which stored at 0th index.


now discuss upon sort alogrithm+++++++++++++++++++++++++++++++
sort(first_arg,second_arg);
first_arg takes  the name of an array which is the starting point of an array 0th index
arr+n
*/