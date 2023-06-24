//Prefix match with other strings
/*
Given an array of strings arr[] of size n, a string str and an integer k. The task is to find the count of strings in arr[] 
whose prefix of length k matches with the k-length prefix of str.

Example 1:

Input:
n = 6
arr[] = {“abba”, “abbb”, “abbc”, “abbd”, 
“abaa”, “abca”}
str = “abbg”
k = 3
Output: 
4 
Explanation:
“abba”, “abbb”, “abbc” and “abbd” have their prefix of length 3 equal to 3-length prefix of str i.e., "abb".



Example 2:

Input:
n = 3
arr[] = {“geeks”, “geeksforgeeks”, “forgeeks”}
str = “geeks”
k = 2
Output: 
2
Explanation:
“geeks” and “geeksforgeeks” have their prefix of length 2 equal to 2-length prefix of str i.e., "ge".

*/

/*


class Solution{   
public:
    int klengthpref(string arr[], int n, int k, string str){ 
        int cnt=0;
        for(int i=0; i<n; i++){
            if(arr[i].size()>=k && str.substr(0,k)==arr[i].substr(0,k)){
                cnt++;
            }
        }
        return cnt;
    }
};
*/


// Eg of substring (substr)

#include <iostream>
#include <string.h>
using namespace std;
 
int main()
{
    string s1 = "GeeksforGeeks";
 
    // Copy two characters of s1 (starting
    // from position 3)
    string r = s1.substr(3, 2);
    cout << "String is: " << r;
 
    return 0;
}

//String is: ks