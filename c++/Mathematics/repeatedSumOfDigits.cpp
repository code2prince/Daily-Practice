//Repeated sum of digits


/*

Given an integer N, recursively sum digits of N until we get a single digit.  The process can be described below

If N < 10    
    digSum(N) = N
Else         
    digSum(N) = Sum(digSum(N))

 

Example 1:

Input:
N = 1234
Output:
1
Explanation:
The sum of 1+2+3+4 = 10, 
digSum(x) == 10 Hence 
ans will be 1+0 = 1
 

 

Example 2:

Input:
N = 9999
Output:
9
*/


#include<iostream>
using namespace std;
int repeatedSumDigits(int n){
    int sum=0;
    while(n>0){
        
        sum=sum+n%10;
        n=n/10;
    }
    if(sum>=10){
        return repeatedSumDigits(sum);
    }else{
        return sum;
    }
}
int main(){
    int n=9999;
    
    cout<< repeatedSumDigits(n);   /// 9 
    return 0; 
}

// 9   >>> (9999 -> 9+9+9+9= 36  >> 3+6 = 9)