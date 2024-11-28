#include<iostream>
#include<cstring>
using namespace std;

//this code only tell us one givin digit is prime or not 
string isprime(int x){
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            return "the given value is not prime";
        }
    }
    return "the given value is prime";
}

int main(){
    int x=2;
    cout<<isprime(x)<<endl;
}