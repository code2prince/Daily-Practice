// first repeated char into a given string 

/*
Given a string consisting of lowercase english alphabets. Find the repeated character present first in the string.

Example 1:

Input:
S = "geeksforgeeks"
Output: g
Explanation: g, e, k and s are the repeating
characters. Out of these, g occurs first. 



Example 2:

Input: 
S = "abcde"
Output: -1
Explanation: No repeating character present.


*/

#include<iostream>
using namespace std;
int main(){
    string str="abcab";
    for(int i=0; i<str.size()-1;i++){
        for(int j=i+1; j<str.size(); j++){
            if(str[i]==str[j]){
                cout<<str[i];
                break;
            }
        }
    }
    return 0;
}
