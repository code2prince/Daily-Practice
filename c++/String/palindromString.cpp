// check string is palindrome or not


// reverse and check >>>>> but it took extra space 

#include<iostream>
using namespace std;
int main(){
    string  str="noon";
    int n=str.length();

    string rev="";
    for(int i=n-1; i>=0; i--){
        rev+=str[i];
    }
    if(rev==str){
        cout<<"palindrome"; // palindrome
    }else{
        cout<<"not";
    }
}