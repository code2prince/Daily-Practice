// Strong No

/*
Strong Numbers are the numbers whose sum of factorial of digits is equal to the original number. 
Given a number, the task is to check if it is a Strong Number or not.
 

Example 1:

Input: 145
Output: 1
Explanation: 1! + 4! + 5! =  1 + 24 + 120 = 145                        



Example 2:

Input: 5314
Output: 0
Explanation: 5! + 3! + 1! + 4! 
is not equal to 5314.
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no: ";
    cin>>n;
    int temp=n;
    int sum=0;

    while(n>0){
        int digit=n%10;
        int fact=1;
        for(int i=1; i<=digit; i++){
            fact=fact*i;
        }
        n=n/10;
        sum+=fact;
    }
    if(sum==temp)
        cout<<"Strong no";
        else
        cout<<"not";
    return 0;
}


// Enter a no: 123
// not


// Enter a no: 145              
// Strong no