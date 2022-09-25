// check a string is palindrome or not 

#include <iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j){
    //base case
    if(i>j)
        return true;
        
    if( str[i] != str[j])
        return false;
        else{
            //recursion
            return checkPalindrome(str, i+1,j-1);
        }
        
}

int main() {
    string name="aba";
    
    bool isPalindrome = checkPalindrome(name, 0, name.length()-1);
    
    if(isPalindrome){
        cout<<"Palindrome";
    }
    else{
        cout<<"not";
    }

    return 0;
}