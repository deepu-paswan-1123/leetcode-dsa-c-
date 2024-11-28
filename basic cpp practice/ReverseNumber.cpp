#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int ReverseNumber(int n){
    int reversed=0;
    while(n != 0){
        int digit = n%10;
        reversed=reversed*10+digit;
        n /=10;
    }
    return reversed;
}

int main(){
    int n=4537;
    cout<<ReverseNumber(n)<<endl;
    return 0;
}