// Binary to Decimal

/*
1111 = 15
1101 = 13
0010 = 2
0011 = 3
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=1101;

    int rem, i=0, dec=0;

    while(n>0){
        rem=n%10;
        n=n/10;

        dec+=rem * pow(2,i);
        i++;
    }
    cout<<dec;    //13
}