// find first repeating char

/*
Given a string S. The task is to find the first repeated character in it. 
We need to find the character that occurs more than once and whose index of second occurrence is smallest. S contains only lowercase letters.

 

Example 1:

Input: S="geeksforgeeks"
Output: e
Explanation: 'e' repeats at third position.
 

Example 2:

Input: S="hellogeeks"
Output: l
Explanation: 'l' repeats at fourth position.
*/

#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    string s="geeksforgeeks";
    string ans="";
    unordered_map<char,int>m;
    for(int i=0; i<s.length(); i++){
        m[s[i]]++;

        if(s[i] > 1){
            ans.push_back(s[i]);
            cout<<ans;
            break;
           
        }
    }
    //cout<<"-1";
    //cout<<ans.size()==0 ? "-1" : ans;

}