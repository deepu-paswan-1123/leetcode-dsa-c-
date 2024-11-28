/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
 

Constraints:

1 <= s.length <= 2 * 105
s consists only of printable ASCII characters.
*/

#include<iostream>
#include<cstring>
using namespace std;

bool isAlphNum(char ch){
    if((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
        return true;
    }else{
        return false;
    }
}

bool validpalindrome(string s,int size){
    int start=0;
    int end=size-1;
    while(start <= end){
        if(!isAlphNum(s[start])){
            start++;
            continue;
        }
        if(!isAlphNum(s[end])){
            end--;
            continue;
        }
        if(tolower(s[start]) != tolower(s[end])){
            return false;
        }
        else{
            start++;
            end--;
        }
    }
    return true;
}

int main(){
    string s="Ac3?e3c&a";
    int size=s.length();
    cout<<size<<endl;
    return 0;
}