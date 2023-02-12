/*
Sum of primes


Your task is to calculate sum  of primes present as digits of given number N.

Example 1:

Input: 333
Output: 9
Explaination: 3 is a prime number. It 
is present 3 times. So 3+3+3 = 9.


Example 2:

Input: 686
Output: 0
Explaination: Neither 6 nor 8 is a 
prime number.
*/

#include<bits/stdc++.h>
using namespace std;
bool isPrime(int digit){
    if(digit<2){
        return false;
    }
    for(int i=2; i<=sqrt(digit); i++){
        if(digit%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n=333;
    int sum=0;
    while(n>0){
        int digit=n%10;
        if(isPrime(digit)){
            sum+=digit;
        }
        n=n/10;
    }
    cout<<"total sum: "<<sum;
    return 0;
}

// total sum: 9