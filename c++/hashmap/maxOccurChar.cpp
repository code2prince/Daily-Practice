// Maximum Occuring Character
/*
Given a string str. The task is to find the maximum occurring character in the string str.
 If more than one character occurs the maximum number of time then print the lexicographically smaller character.

Example 1:

Input:
str = testsample
Output: e
Explanation: e is the character which
is having the highest frequency.




Example 2:

Input:
str = output
Output: t
Explanation:  t and u are the characters
with the same frequency, but t is
lexicographically smaller.

*/

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
int main()
{
    string str = "GeeksForGeeks";

    unordered_map<char, int> m;
    int max = INT_MIN;
    char maxChar;
    for (int i = 0; i < str.length(); i++)
    {
        m[str[i]]++;
    }
    for (auto itr = m.begin(); itr != m.end(); itr++)
    {
        if(itr->second > max){
            max=itr->second;
            maxChar=itr->first;
        }
    }
    cout<<"max occurance char : "<<maxChar;
}

// max occurance char : e











// using map 


/*
 map<char,int>m;
        int max=INT_MIN;
        char maxChar;
        for(int i=0; i<str.length(); i++){
            m[str[i]]++;
        }
        for(auto it:m){
            if(it.second>max){
                max=it.second;
                maxChar=it.first;
            }
        }
        return maxChar;
*/