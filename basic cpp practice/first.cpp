#include <iostream>
using namespace std;

int main(){
    char character;
    cout<<"Enter any character";
    cin>>character;
    if(character >= 'a' && character <= 'z'){
        cout<<"character is lower case";
    }
    else if(character >= 'A' && character <= 'Z') {
        cout<<"character is upper case";
    }
    else{
        cout<<"not a character";
    }
    return 0;
}