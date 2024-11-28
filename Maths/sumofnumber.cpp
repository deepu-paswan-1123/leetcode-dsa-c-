#include<iostream>
using namespace std;

int sum(int n){
    int sum=0;
    while(n != 0){
        int digit=n%10;
        sum +=digit;
        n /=10;
    }
    return sum;
}

int main(){
    int n=345;
    cout<<sum(n)<<endl;
    return 0;
}