#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

/*
    here we are discussing about the bruete force approach of the prime number between the
    given range
*/

int checkprime(int N){
    int count=0;
    for(int i=2;i<N;i++){
        int isprime=true;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                isprime=false;
                break;
            }
        }
        if(isprime){
            count++;
        }
    }
    return count;
}


/*
 there are some optimized code for the count of prime numbere that is given below
 that approach is called the Sieve of Eratosthenes
*/

int countprime(int n){
    vector<bool> isprime(n+1,true);
    int count =0;
    for(int i=2;i<n;i++){
        if(isprime[i]){
            count++;
            for(int j=i*2;j<n;j=j+i){
                isprime[j]=false;
            }
        }
    }
    return count;
}

int main(){
    int N=20;
    cout<<countprime(N)<<endl;
    return 0;
}