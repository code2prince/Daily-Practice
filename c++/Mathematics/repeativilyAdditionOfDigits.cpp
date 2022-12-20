/// Repetitive Addition Of Digits



/*
Given a non-negative integer N, repeatedly add all its digits until the result has only one digit.

Example 1:

Input:
N = 98

Output:
8

Explanation:
Sum of digit of N = 98  is 9 + 8 = 17
Sum of digit of 17 = 1 + 7 = 8
Since 8 is the single digit number hence it is the 
required answer.





Example 2:
Input:
N = 1
Output:
1

Explanation:
Since 1 is the single-digit number hence it is the 
required answer.

*/


/*

class Solution
{
public:
    int singleDigit(long long N)
    {
        // Write Your Code here
        long long sum=0;
        while(N>0){
            int r=N%10;
            sum=sum+r;
            N=N/10;
        }
        if(sum>=10){
            return singleDigit(sum);
        }else{
            return sum;
        }
    }
};

*/









#include<iostream>
using namespace std;
int singleDigit(int n){
int sum=0;
    while(n>0){
        int r=n%10;
        sum=sum+r;
        n=n/10;
    }

if(sum>=10){
        return singleDigit(sum);
    }else{
        return sum;
    }
}
int main(){
    int n=98;
    
    cout<<singleDigit(n);   // 8

    return 0;

}