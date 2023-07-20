//Non Repeating Character
/*
Given a string S consisting of lowercase Latin Letters. Return the first non-repeating character in S. If there is no non-repeating character, return '$'.

Example 1:

Input:
S = hello
Output: h
Explanation: In the given string, the
first character which is non-repeating
is h, as it appears first and there is
no other 'h' in the string.


Example 2:

Input:
S = zxvczbtxyzvy
Output: c
Explanation: In the given string, 'c' is
the character which is non-repeating.
*/

/*

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       map<char,int>m;
       for(int i=0; i<S.length(); i++){
           m[S[i]]++;
       }
       for(int i=0; i<S.length(); i++){
           if(m[S[i]]==1){
               return S[i];
           }
       }
       return '$';
    }
};

*/