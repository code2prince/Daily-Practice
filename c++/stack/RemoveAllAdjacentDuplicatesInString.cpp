// Remove All Adjacent Duplicates In String   >> leetcode
/*
You are given a string s consisting of lowercase English letters. 
A duplicate removal consists of choosing two adjacent and equal letters and removing them.

We repeatedly make duplicate removals on s until we no longer can.

Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

 

Example 1:

Input: s = "abbaca"
Output: "ca"
Explanation: 
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".



Example 2:

Input: s = "azxxzy"
Output: "ay"
*/

/*
class Solution {
public:
    string removeDuplicates(string s) {
        string ans="";
        stack<char>st;
        int i=0;
        int n=s.length();
        while(i<n){
            if(st.empty() || st.top()!=s[i]){
                st.push(s[i]);
            }else{
                st.pop();
            }
            i++;
        }
        while(!st.empty()){
            char element = st.top();
            st.pop();

            ans+=element;
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="abbaca";
    int n=str.length();

    // push element into stack and check if top of element match with current string then pop them
    stack<char>st;
    int i=0;
    while(i<n){
        if(st.empty() || st.top()!=str[i]){
            st.push(str[i]);
        }else{
            st.pop();
        }
        i++;
    }

    // pop from stack ans store into ans 
    string ans="";
    while(!st.empty()){
        char element=st.top();
        st.pop();

        ans+=element;
    }
    // now we have to reverse because stack make the string reverse due to LIFO order
    reverse(ans.begin(), ans.end());

    cout<<ans;  
}

// ca