// Reverse Vowels of a String
/*
Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

Example 1:

Input: s = "hello"
Output: "holle"


Example 2:

Input: s = "leetcode"
Output: "leotcede"
*/

/*
class Solution {
public:
bool isVowel(char c){
    return c=='a' || c=='e' || c=='i' ||c=='o' ||c=='u' || c=='A' || c=='E' || c=='I'   || c=='O' || c=='U';
}
    string reverseVowels(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
            if(isVowel(s[i]) && isVowel(s[j])){
                swap(s[i],s[j]);
                    i++;
                    j--;
            }
            else if(!isVowel(s[i])){
                i++;
            }
            else if(!isVowel(s[j])){
                j--;
            }
        }
        return s;
    }
};
*/

#include<bits/stdc++.h>
using namespace std;
bool isVowel(char c){
    return c=='a' || c=='e' || c=='i' ||c=='o' ||c=='u' || c=='A' || c=='E' || c=='I'   || c=='O' || c=='U'; 
}
string reverseVowel(string s){
    int i=0;
    int j=s.length()-1;
    while(i<j){
        if(isVowel(s[i]) && isVowel(s[j])){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        else if(!isVowel(s[i])){
            i++;
        }
        else if(!isVowel(s[j])){
            j--;
        }
    }
     return s;

}
int main(){
    string s="hello";
    string reverseVowel(string s);
    for(int i=0; i<s.length(); i++){
            cout<<s[i];
        }
}
   

