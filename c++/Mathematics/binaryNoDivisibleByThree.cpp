//Is Binary Number Multiple of 3
/*
Sharpen up your programming skills, participate in coding contests & explore high-paying jobs

Given a number in its binary form find if the given binary number is a multiple of 3. It is recommended to finish the task using one traversal of input binary number.

Example 1:

Input: S = "0011"
Output: 1
Explanation: "0011" is 3, which is divisible by 3.


Example 2:

Input: S = "100"
Output: 0
Explanation: "100"'s decimal equivalent is 4, which is not divisible by 3.
*/

#include<iostream>
using namespace std;
int main(){
    string s="0011";
    int n=s.length();
    int even,odd=0;
    for(int i=0; i<n; i++){
        if(s[i]=='1'){
            if(i%2) odd++;
            else even++;
        }
    }
    cout<<((odd-even)%3==0);   /// o/p 1

}