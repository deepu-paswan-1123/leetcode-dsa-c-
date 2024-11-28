#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[13];
    cout<<"Enter the valid string only "<<endl;
    // cin.getline(str,100); // in this when next line comes then it stops to take the input
    // for this reason we use the delimiter in which we give the specific symbol when we use that 
    // after that take input should be stop
    cin.getline(str,13,'.');
    cout<<"the given string is :- "<<str<<endl;
    // we can print the every character in string through the foreach loop
    for(auto ch: str){
        cout<<ch<<" ";
    }
    cout<<endl;
    return 0;
}
