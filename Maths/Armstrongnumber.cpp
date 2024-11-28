#include<iostream>
using namespace std;

bool Armstrongnumber(int n){
    int copyofn=n;
    int sum=0;
    while(n != 0){
        int digit= n % 10;
        sum += (digit*digit*digit);
        n /=10;
    }
    if(sum == copyofn){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n=152;
    if(Armstrongnumber(n)){
        cout<<"the given number is Armstrong number "<<endl;
    }
    else{
        cout<<"the given number is not a Armstrong number"<<endl;
    }
    return 0;
}