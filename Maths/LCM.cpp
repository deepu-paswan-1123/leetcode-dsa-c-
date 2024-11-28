#include<iostream>
using namespace std;


int gcdRec(int a,int b){
    if(b==0) return a;

    return gcdRec(b,a%b);
}

/*
    here for lcm mathmatics formula is 
    a*b=H.C.F*L.C.M
    L.C.M=a*b/ H.C.F
*/

int LeastCommonFactor(int a,int b){
    int gcd=gcdRec(a,b);
    int lcm=((a*b)/gcd);
    cout<<lcm<<endl;
    return ((a*b)/gcd);
}

int main(){
    int a=12;
    int b=8;
    cout<<LeastCommonFactor(a,b)<<endl;
    return 0;
}