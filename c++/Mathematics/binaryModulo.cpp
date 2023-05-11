// Binary Modulo 

/*
You are given a binary string s and an integer m. You need to return an integer r. Where r = k%m, k is the binary equivalent of string s.

Example 1:

Input:
s = "101" 
m = 2
Output:
1
Explanation: Here k=5 because (101)2 = (5)10.
Hence 5 mod 2 = 1.





Example 2:

Input:
s = "1000"
m = 4
Output:
0
Explanation: Here k=8 and m=4 hence 
r = k mod m = 8 mod 4 = 0.
*/


/*
class Solution{
    public:
        int modulo(string s,int m)
        {
            int n=stoi(s);
            int rem, i=0, dec=0;
            while(n>0){
                rem=n%10;
                n=n/10;
                
                dec+=rem* pow(2,i);
                i++;
            }
            return dec%m;
        }
};
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="101";
    int m=2;

    int n=stoi(s);
    int rem, dec=0, i=0;

    while(n>0){
        rem=n%10;
        n=n/10;

        dec+=rem * pow(2,i);
        i++;
    }

    cout<<"decimal "<<dec<<endl;    // decimal 5

    cout<<dec%m;      // 1
}