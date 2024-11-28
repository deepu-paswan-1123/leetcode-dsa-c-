/*
Given an integer x, return true if x is a 
palindrome
, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

Constraints:

-231 <= x <= 231 - 1
*/

#include<iostream>
#include<cstring>
using namespace std;
// here method is used convert into the string there is anoter method also withour converting the string
bool validpalindrome(string s,int size){
    int start =0;
    int end=size-1;
    if(s[0] == '-'){
        return false;
    }
    while(start < end){
        if(s[start] != s[end]){
            return false;
        }
        else{
            start++;
            end--;
        }
    }
    return true;
}

// here is the second method withour convert into the string
bool ispalindrome(int x){
    if(x<0) return false;
    int reversed=0;
    int original=x;
    while(x>0){
        int digit=x%10;
        reversed=reversed*10 + digit;
        x /=10;
    }
    return reversed==original?true:false;
}

int main(){
    int x=121;
    string y=to_string(x);
    int size=y.length();
    cout<<size<<endl;
    if( ispalindrome(x)){
        cout<<"this given number is valid palindrome"<<endl;
    }else{
        cout<<"the given number is not valid palindrome"<<endl;
    }
    return 0;
}