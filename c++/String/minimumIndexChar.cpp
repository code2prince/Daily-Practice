//Minimum indexed character




/*
Given a string S and another string patt. Find the character in patt that is present at the minimum index in S.
 

Example 1:

Input: S = "zsyle", patt = "bjz"
Output: "z"
Example 2:

Input: S = "anskg", patt = "me"
Output: "$"

*/

#include<iostream>
using namespace std;
string minIndex(string s1, string s2){
    string ans="$";
    for(int i=0; i<s1.length(); i++){
        for(int j=0; j<s2.length(); j++){
            if(s1[i]==s2[j]){
                ans=s2[j];
                return ans;
            }
        }
    }
    return ans;
}
int main(){
    string s1="zsyle";
    string s2="bjz";

minIndex(s1,s2);
return 0;
    
}

/*
string ans="$";
	    for(int i=0; i<S.length(); i++){
	        for(int j=0; j<patt.length();j++){
	            if(S[i]==patt[j]){
	            ans=patt[j];
	            return ans;
	                
	            }
	            
	        }
	        
	    }
	    return ans;
        */