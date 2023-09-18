// Digit (Number) to Binary

/* 
13 -> 1101
11 -> 1011
8  -> 1000
*/

#include<iostream>
using namespace std;
int main(){
    int n=13;
    int rem=0, i=1, ans=0;
    while(n!=0){
        rem=n%2;
        ans+=rem*i;
        i=i*10;
        n=n/2;
    }
    cout<<"ans: "<<ans;
}
// ans: 1101