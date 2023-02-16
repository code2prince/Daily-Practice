// Anagram

#include <bits/stdc++.h>
using namespace std;
int angram(string s1, string s2){
    int n1=s1.length();
    int n2=s2.length();
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if(n1!=n2){
        return false;
    }
    for(int i=0; i<n1; i++){
        if(s1[i]!=s2[i]){
            return false;
        }
    }
    return true;
}
int main() {
    string s1="abcd";
    string s2="bcda";
    if(angram(s1,s2)){
        cout<<"Its an Anagram";
    }else{
        cout<<"not";
    }

    return 0;
}

// Its an Anagram