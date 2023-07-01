//Number of 1 Bits
/*
Sharpen up your programming skills, participate in coding contests & explore high-paying jobs

Given a positive integer N, print count of set bits in it. 

Example 1:

Input:
N = 6
Output:
2
Explanation:
Binary representation is '110' 
So the count of the set bit is 2.


Example 2:

Input:
8
Output:
1
Explanation:
Binary representation is '1000' 
So the count of the set bit is 1.
*/

#include<iostream>
using namespace std;
int main(){
    int n=11;
    int cnt=0;
    while(n){
        if(n%2==1){
            cnt++;
        }
        n=n/2;
    }
    cout<<cnt;   //3
}
