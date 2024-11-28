#include<iostream>
using namespace std;

// Bruete force approach time complexity O(min(a,b))
int GreatestDivisior(int a,int b){
    int gcd=1;
    if(a==0){
        gcd=b;
    }else{
        gcd=a;
    }
    if(a==b){
        gcd=a;
    }
    for(int i=1;i<min(a,b);i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    return gcd;
}

/*
    now here we are going to solve this problem with the Euclid algorithm 
    that says => gcd(20,28) now we can simplye do subtract lower value from greater value and 
    repeat this step until on of both will be 0 and remain value will be the gcd(greatest common divisior)
    gcd(20,28)->28-20=8
    gcd(20,8)->20-8=12
    gcd()
*/

// Euclid algorithm

int Highestcommonfactor(int a ,int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
    }
    if(a==0) return b;
    if(b==0) return a;
}


// this is also done this method through recursion
// that first approach we considered the a always greater
int gdcRec(int a,int b){
    if(b==0) return a;
    return gdcRec(b,a%b);
}

int main(){
    int a=28;
    int b=28;
    cout<<gdcRec(a,b)<<endl;
    return 0;
}