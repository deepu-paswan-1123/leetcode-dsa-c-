#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string s;
    /*
        now here is also the same logic of character array for input but method is different 
        and that is use directly getline instead of use cin.getline use getline(cin,s,delimiter)
    */
    cout<<"Enter the value of string :--"<<endl;
    getline(cin,s);

    cout<<"this is the given string by the user :--"<<s<<endl;

    for(auto val:s){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}