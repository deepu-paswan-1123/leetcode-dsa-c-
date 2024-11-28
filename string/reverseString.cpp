#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string s="dimple";
    int a=1;
    int b=s.length();
    cout<<s<<endl;
    while(a<=b){
        swap(s[a],s[b]);
        a++;
        b--;
    }
    cout<<s<<endl;

    return 0;
}