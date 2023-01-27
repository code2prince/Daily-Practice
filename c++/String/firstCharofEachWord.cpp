
/*
Given a string S, the task is to create a string with the first letter of every word in the string.
 

Example 1:

Input: 
S = "geeks for geeks"
Output: gfg



Example 2:

Input: 
S = "bad is good"
Output: big
*/


#include <iostream>
using namespace std;
int main() {
    string s="geeks for geeks";
    int n=s.size();
    for(int i=0; i<n; i++){
        if(i==0){
            cout<<s[i];
        }else if(s[i]==' '){
            cout<<s[i+1];
        }
    }

    return 0;
}

//gfg