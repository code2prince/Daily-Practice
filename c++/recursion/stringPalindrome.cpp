// Check a given string is palindrome or not using recursion

#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str, int i){
    int n=str.length();
    //base case
    if(i>=n/2){
        return true;
    }
    if(str[i]!=str[n-i-1]){
        return false;
    }
    return isPalindrome(str,i+1);
    
}
int main(){
    string str="madam";
    if(isPalindrome(str,0)){
        cout<<"Yes";   
    }else{
        cout<<" not ";
    }
}

// Yes


/*
>> iterative way
bool isPalindrome(string str, int n){
    string rev="";
    for(int i=n-1; i>=0; i--){
        rev+=str[i];
    }
    if(rev==str){
        return true;
    }else{
        return false;
    }
    
}*/