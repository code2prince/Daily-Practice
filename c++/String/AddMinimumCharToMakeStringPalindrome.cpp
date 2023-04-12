// Add Minimum char to make string palindrome 

/*
Given a string str, find the minimum characters to be added at front of the string to make it a palindrome.


Example 1:

Input:
str = ABCD
Output: 3
Explanation: The resultant string 
after adding 3 characters is DCBABCD.
The minimum possible answer is 3.



Example 2:

Input:
str = ABA
Output: 0
Explanation: The given string
is already a palindrome.
*/

/*
class Solution{   
public:
    int addMinChar(string str){    
        //code here
        int n=str.length();
       int i=0;
       int j=n-1;
       int ans=0;
       while(i<=j){
           if(str[i]==str[j]){
               i++;
               j--;
           }else{
               ans++;
               i=0;
               j=n-1-ans;
           }
       }
       return ans;
        
    }
};
*/

#include<iostream>
using namespace std;
int main(){
    string str="ABCD";
    int n=str.length();
    int i=0;
    int j=n-1;
    int ans=0;
    while(i<=j){
        if(str[i]==str[j]){
            i++;
            j--;
        }else{
            ans++;
            i=0;
            j=n-1-ans;
        }
    }
    cout<<ans;   //3

}