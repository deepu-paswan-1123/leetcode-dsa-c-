#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string s="deepu";
    int start=0;
    int end=s.length()-1;
    while(start <= end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    cout<<s<<endl;
    return 0;
}