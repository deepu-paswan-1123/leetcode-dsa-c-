/*
Implement pow(x, n), which calculates x raised to the power n (i.e., xn).
Example 1:

Input: x = 2.00000, n = 10
Output: 1024.00000

Constraints:

-100.0 < x < 100.0
-2pow(31) <= n <= 2pow(31)-1
n is an integer.
Either x is not zero or n > 0.
-104 <= xn <= 104

*/

/*
Description about question 
here if do with it linear time complexity O(n) then here one problem arise
that probleme is we studied in 1sec it cam perform pow(10,8) but here constraints are given 
-2pow(31) <= n <= 2pow(31)-1 so here pow(2,31) >>> pow(10,8) so we can not perform the linear time
complexity. for example
pow(2,3)->2*2*2 here time complexity is O(n) but can not be apply

*/



#include<iostream>
using namespace std;

// first approach is O(n) time complexity

float power(float x,float n){
    float pow=1;
    for(float i=0;i<n;i++){
        pow *=x;
    }
    return pow;
}

/*
now here we will do it with another time complexity which satisfy 1sec condition
this is the concept of binary exponention 
here below function time complexity is O(log n) that is minimum from O(n)

*/

double exponentialpower(double x, int n){
    if(x==0){
        return 0.0;
    }
    if(n==0){
        return 1.0;
    }
    if(x==1){
        return 1.0;
    }

    if(x== -1 &&  n %2 ==0){
        return 1.0;
    }

    if(x == -1 && n%2 !=0){
        return -1.0;
    }

    long binaryform=n;
    double ans=1; 
    if(binaryform <0){
        x=1/x;
        binaryform=-binaryform;
    }
    while (binaryform>0)
    {
        if(binaryform %2 == 1){
            ans *=x;
        }
        x *=x; //here we increase the x exponentially x*x = pow(x,2) similiary increase in everystep
        binaryform /=2;

    }
    return ans;
    
}


int main(){
    float x=2.000;
    float n;
    cout<<"Enter the value of n :--"<<endl;
    cin>>n;

    cout<<power(x,n)<<endl;
    cout<<exponentialpower(x,n)<<endl;

    return 0;
}