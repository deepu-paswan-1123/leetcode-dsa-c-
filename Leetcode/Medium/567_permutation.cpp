/*

Given two strings s1 and s2, return true if s2 contains a 
permutation
 of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.

 

Example 1:

Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").
Example 2:

Input: s1 = "ab", s2 = "eidboaoo"
Output: false
 

Constraints:

1 <= s1.length, s2.length <= 104
s1 and s2 consist of lowercase English letters.

*/


#include<iostream>
#include<cstring>
using namespace std;

bool isfreqsame(int freq[],int windfreq[]){
    for(int i=0;i<26;i++){
        if(freq[i] != windfreq[i]){
            return false;
        }
    }
    return true;
}

bool checkinclusion(string s1,string s2){
    int freq[26]={0};
    for(int i=0;i<s1.length();i++){
        int idx=s1[i]-'a';
        freq[idx]++;
       
    }
    int windsize=s1.length();
    for(int i=0;i<s2.length();i++){
        int windIdx=0;
        int idx=i;
        int windfreq[26]={0};
        while(windIdx < windsize && windIdx < s2.length()){
            windfreq[s2[idx]-'a']++;
            windIdx++;
            idx++;
        }

        if(isfreqsame(freq,windfreq)){
            return true;
        }
    }
    return false;
}

int main(){
    string s1="abef";
    string s2="eidbaooo";
    if(checkinclusion(s1,s2)){
        cout<<"the given string in s1 does exist in s2"<<endl;
    } else{
        cout<<"the given string in s1 does not exist in s2"<<endl;
    }  
    return 0;
}