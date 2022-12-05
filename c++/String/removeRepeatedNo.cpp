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