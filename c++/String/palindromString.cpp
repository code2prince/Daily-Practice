// check string is palindrome or not


// reverse and check >>>>> but it took extra space 

// #include<iostream>
// using namespace std;
// int main(){
//     string  str="noon";
//     int n=str.length();

//     string rev="";
//     for(int i=n-1; i>=0; i--){
//         rev+=str[i];
//     }
//     if(rev==str){
//         cout<<"palindrome"; // palindrome
//     }else{
//         cout<<"not";
//     }
// }


// solve without using extra space 

#include<iostream>
using namespace std;
bool checkPalindrome(string str, int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(str[s]!=str[e]){
            return false;
        }else{
            s++;
            e--;
        }
    }
    return true;
}

int main(){
    string str="madam";
    int n=str.length();
    
    if(checkPalindrome(str, n)){
        cout<<"its a palindrome";  //its a palindrome
    }else{
        cout<<"not a palindrome";
    }
}