// Reverse Vowels of a String
/*
Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

Example 1:

Input: s = "hello"
Output: "holle"


Example 2:

Input: s = "leetcode"
Output: "leotcede"
*/

/*
class Solution {
public:
bool isVowel(char c){
    return c=='a' || c=='e' || c=='i' ||c=='o' ||c=='u' || c=='A' || c=='E' || c=='I'   || c=='O' || c=='U';
}
    string reverseVowels(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
            if(isVowel(s[i]) && isVowel(s[j])){
                swap(s[i],s[j]);
                    i++;
                    j--;
            }
            else if(!isVowel(s[i])){
                i++;
            }
            else if(!isVowel(s[j])){
                j--;
            }
        }
        return s;
    }
};
*/
/* // Approach 1
#include<bits/stdc++.h>
using namespace std;
bool isVowel(char c){
    return c=='a' || c=='e' || c=='i' ||c=='o' ||c=='u' || c=='A' || c=='E' || c=='I'   || c=='O' || c=='U'; 
}
string reverseVowel(string s){
    int i=0;
    int j=s.length()-1;
    while(i<j){
        if(isVowel(s[i]) && isVowel(s[j])){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        else if(!isVowel(s[i])){
            i++;
        }
        else if(!isVowel(s[j])){
            j--;
        }
    }
     return s;

}
int main(){
    string s="hello";
    string reverseVowel(string s);
    for(int i=0; i<s.length(); i++){
            cout<<s[i];
        }
}
   */


   // 2nd Approach (two pointer)
/*
#include<iostream>
   using namespace std;
   bool isVowel(char c){
    if(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u'){
        return true;
    }return false;
   }
   int main(){
    string str="leetcode"; //leotcede
    int n=str.length();
    int s=0, e=n-1;
    while(s<e){
        while(s<e && !isVowel(str[s])){
            s++;
        }
        while(s<e && !isVowel(str[e])){
            e--;
        }
        if(s<e){
            swap(str[s],str[e]);
            s++;
            e--;
        }
    }
    cout<<str;
   }
   */

   //3rd Approach (Take all vowels from given string and put into a vector and replace the given string with vector data from last of the vetor it will works)

#include<bits/stdc++.h>
using namespace std;
bool isVowel(char c){
    return(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u');
}
int main(){
    string str="Leetcodi";  //Liotcede
    int n=str.length();
    vector<char>v;
    for(int i=0; i<n; i++){
        if(isVowel(str[i])){
            v.push_back(str[i]);  //pushing all vowel from string to Vector
        }
    }

    int vSize=v.size()-1;   //length of vector 

    for(int i=0; i<n; i++){
        if(isVowel(str[i])){
            str[i]=v[vSize--];  // replacing vowel from string to vector last values
        }
    }
    cout<<str;

}