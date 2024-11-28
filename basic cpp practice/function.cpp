#include<iostream>
using namespace std;

// int factorial(int n){
//     if(n==1 || n==0){
//         return 1;
//     }
//     else{
//         return n*factorial(n-1);
//     }  
// }


// int digsum(int num){
//     int digitsum=0;

//     while(num>0){
//         int lastdig=num%10; //here we got the remainder  lastdig=245%10=5
//         num /=10;           //here we got the quotient   num=245/10=24 here condtition is true
//         digitsum +=lastdig; //lastdig=24%10=4 similiarly num=24/10=4 again repeat step 
//     }

//     return digitsum;
// }


// here we are going to know how to calculate the combination
// ncr=n!/r!*(n-r)!

// int factorial(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     else{
//         return n*factorial(n-1);
//     }
// }

// int combination(int n,int r){
//     if(n>=r){
//         int a=factorial(n);
//         int b=factorial(r);
//         int c=factorial(n-r);

//         return a/(b*c);
//     }
//     else{
//         return 0;
//     }
// }

// int main(){
//     int res =combination(5,5);
//     if(res==0){
//         cout<<"the given combination is not valid ";
//     }
//     else{
//         cout<<"the given number combination is "<<res;
//     }
//     return 0;
// }