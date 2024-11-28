#include<iostream>
using namespace std;

int factorial(int n){
    // if(n==1 || n==0){
    //     return 1;
    // }
    // return n*factorial(n-1);
    int fact=1;
    if(n==0){
        return 1;
    }
    for(int i=2;i<=n;i++){
        fact *=i;
    }
    return fact;
}


int sum(int n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}

int main(){
    int result =factorial(0);
    int res=sum(1);
    cout<<res<<endl;
    return 0;
}