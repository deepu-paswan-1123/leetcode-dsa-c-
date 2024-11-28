#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string s="deepu";
    int start=0;
    int end=s.length()-1;
    bool res=false;
    while(start <= end){
        if(s[start] != s[end]){
            res=false;
            break;
        }
        else{
            res=true;
        }
        start++;
        end--;
    }
    if(res){
        cout<<"the given string is a palindrome"<<endl;
    }else{
        cout<<" the given string is not a palindrome "<<endl;
    }
    
    return 0;
}