// Make Palindrome 

/*
You are given an array of strings arr of size n.
 You have to find out if it is possible to make a palindromic string by concatenating the strings in any order. 
 Provided that all the strings given in the array are of equal length.

Example 1:

Input:
n = 4
arr = {"djfh", "gadt", "hfjd", "tdag"}
Output:
YES
Explanation:
You can make the string "djfhgadttdaghfjd", by concatenating the given strings which is a palindrome.



Example 2:

Input:
n = 3
arr = {"jhjdf", "sftas", "fgsdf"}
Output:
NO
Explanation:
You can't make a palindromic string with this strings.
*/




/*
class Solution{
public:
    bool makePalindrome(int n,vector<string> &arr){
        unordered_map<string,int>m;
        for(auto s:arr){
            m[s]++;
            reverse(s.begin(),s.end());
            m[s]++;
        }
        for(auto itr:m){
            if(itr.second%2!=0){
                return false;
            }
        }
        return true;
    }
};
*/


#include<bits/stdc++.h>
using namespace std;
bool makePalindrome(string arr[], int n){
    unordered_map<string,int>m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
        reverse(arr[i].begin(), arr[i].end());
        m[arr[i]]++;
    }

    for(auto itr:m){
        if(itr.second %2!=0){
            return false;
        }
    }
    return true;
}
int main(){
    string arr[]={"abc", "mno", "cba", "onm"};
    int n=sizeof(arr)/sizeof(arr[0]);

   if( makePalindrome(arr,n)){
    cout<<"Palindrome";   // Palindrome
   }else{
    cout<<"not";
   }
}