/* 
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. 
You may assume that the majority element always exists in the array.

Example 1:

Input: nums = [3,2,3]
Output: 3 
*/


// first we will solve it bruete force approach
// and calculate it time complexity

/*
first we will understand what is majority element lets discuss
here  wille diveide the every element of the array from 2 then which quiotent remain 
more than that question our that number should be exist

lets suppost
int arr[]={3,2,3}
now if 2/2 =1 but it not exist mor than 1 so it is not a majority element 
now 3/2=1.5 here we take floor of it and now here 3 if double from its number so it is the majority
element
*/

#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

// here time complexity is O(n2)
int majorityelement(vector <int> vec,int size){
    // int element;
    for(int value : vec){
        int counter=0;
        for(int elem:vec){
            if(value==elem){
                counter++;
                
            }
        }
        if(counter > size/2){
           return value;
        }
        
    }
    return -1;
}



/*now we are going to solve the same question from another time complexity O(nlogn) which is faster
than O(n2)
____________________how O(nlogn) time complexity come_____________________
first we sorting the array which internally use the quicksort and time sort and there approach is 
divede and conquer approach which comes in the logn due to divide the array into the half
and n comes from searching in linearly so total algorithm is nlogn 
now we are applying the for loop in our function so their time complexity is O(n)
now sum of O(n)+nlogn is O(nlogn) so from here the time complexity is calculated*/
int anohtermajorelementmethod(vector<int>vec,int size){
    sort(vec.begin(),vec.end());
    int frequency=1;
    int ans=vec[0];
    for(int i=1;i<size;i++){
        if(vec[i]==vec[i-1]){
            frequency++;
        }
        else{
            frequency=1;
            ans=vec[i];
        }

        if(frequency > size/2){
            return ans;
        }
    }
    return -1;
}

/*
now this question can be solved with the help of moore's voting algorithm in which time complexity is O(n)
first of all we need to understand whats moore's algorithm said it said if we tackle same element then
we need increase the frequency and if we tackle not same element then we need to decrease the frequency 
now then how to calculate the majority element it is like that if any person have majority of voting
in election then he occupied more than half voter of the voters then if we subtract the anothter 
voter then it always remain in majority
*/

int mooresalgorithm(vector <int> vec , int size){
    int frequency=0;
    int ans=0;
    for(int i=0;i<size;i++){
        if(frequency==0){
            ans=vec[i];
        }
        if(ans==vec[i]){
            frequency++;
        }
        else{
            frequency--;
        }
    }
    int count=0;
    for(int value:vec){
        if(value==ans){
            count++;
        }
        
    }
    if(count>size/2){
        return ans;
    }
    else{
        return -1;
    }
    return ans;
}

int main(){
    vector <int> vec={3,5,7,9,8,8,8,8,8,8};
    int size=vec.size();
    // int result = majorityelement(vec,size);
    // int result=anohtermajorelementmethod(vec,size);
    // cout<<"the majority element is: "<<result<<endl;
    int result=mooresalgorithm(vec,size);
    cout<<"the majority element is: "<<result<<endl;
    return 0;
}