//Remove repeated digits in a given number

/*

Example 1:

Input:
N = 1224
Output: 124
Explanation: Two consecutive occurrences of 
2 have been reduced to one.



Example 2:

Input: 
N = 1242
Output: 1242
Explanation: No digit is repeating 
consecutively in N.

*/

/*
long long int modify (long long int N)
{
    // your code here
    long long ans=0;
    string s=to_string(N);
    for(int i=0; i<s.length(); i++){
        if(s[i]==s[i+1]){
            continue;
        }else{
            ans=ans*10+(s[i]-'0');
        }
    }
    return ans;
}
*/


#include<iostream>
using namespace std;
int main(){
    int n=1223;
    int ans=0;
    string str=to_string(n);
    for(int i=0; i<str.length(); i++){
        if(str[i]==str[i+1]){
            continue;
        }else{
            ans=ans*10+str[i]-'0';
        }
    }
    cout<<"ans:" <<ans;
}

// ans:123
