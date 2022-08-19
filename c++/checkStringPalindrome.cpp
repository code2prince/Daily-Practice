// check a string is palindrome or not

#include<iostream>
using namespace std;
int main(){
    string str;
    string rev="";
    cout<<"Enter a sting to check palindrome:";
    cin>>str;
    for(int i=str.length()-1; i>=0; i--){
        rev=rev+str[i];
    }
    if(rev==str)
        cout<<"String is palindrome"<<endl;
    else
        cout<<"String is not palindrome";  
return 0;
}