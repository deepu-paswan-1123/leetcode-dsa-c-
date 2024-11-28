/*
first the time complexit are measured in worst case mainly which represent by the big o (O) and 
average time complexity and best time complexity are measuring it is represent by theta and omega

here are some time complexity

1.O(1) constant time complexity
2.O(logn) it is also better but less than O(1)
3.O(n) linear time complexity
4.O(nlogn)
5.O(x square,x2)
6.O(x3)
7.O(2 power x,2x) exponential time complexity it is basically measured in recursion
8.O(n!)
*/


// some qestion on time complexity measurment

// 1.calculte the sum of 1 from n natural number

#include<iostream>
using namespace std;


int main(){
    // first method is using the loop which time complexity is O(n)
    int number;
    int sum=0;
    cout<<"Enter the number for the natural sum"<<endl;
    cin>>number;

    for(int i=1;i<=number;i++){
        sum +=i;
    }
    cout<<"the sum of numbers from 1 to "<<number<<" is "<<sum;

    // now here we can increase the efficiency of our time complexity we know that the O(n) increase with
    // increase the value so it can be done with the O(1) constant time complexity
    cout<<endl;
    sum=number*(number+1)/2;
    cout<<"the sum of numbers from 1 to "<<number<<" is "<<sum;

    return 0;
}