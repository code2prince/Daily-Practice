//-------- Palindrome Digit ----------by Recrsion

#include<iostream>
using namespace std;
int getReverse(int n, int rev){
    if(n==0){
        return rev;
    }
    int rem=n%10;
    rev= rev*10 + rem;
    n=n/10;
    return getReverse(n, rev);
}
int main(){
    int n=123;
    int rev=0;
    int temp= getReverse( n,  rev);
    
    if(temp==n){
        cout<<"Palindrome";
    }else{
        cout<<"not Palindrome";
    }

}
