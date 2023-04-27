//Min sum formed by digits
/*

Given an array of digits (values are from 0 to 9), find the minimum possible sum of two numbers formed from digits of the array. 
All digits of the given array must be used to form the two numbers.

Any combination of digits may be used to form the two numbers to be summed.  Leading zeroes are permitted.

If forming two numbers is impossible (i.e. when n==0) then the "sum" is the value of the only number that can be formed.



Example 1:

Input:
N = 6
arr[] = {6, 8, 4, 5, 2, 3}
Output:
604
Explanation:
The minimum sum is formed by numbers 
358 and 246
 

Example 2:

Input:
N = 5
arr[] = {5, 3, 0, 7, 4}
Output:
82
Explanation:
The minimum sum is formed by numbers 
35 and 047

*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={6,8,4,5,2,3};
    int n=6;
   int sum1=0, sum2=0;
    sort(arr,arr+n);
    for(int i=0; i<n; i++){
        if(i%2==0){
            sum1=sum1*10 + arr[i];
        }else{
            sum2=sum2*10 + arr[i];
        }
    }
    cout<<"min sum : "<<sum1+sum2;    // min sum : 604

    return 0;
}

/*
class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
        sort(arr,arr+n);
        long long sum1=0, sum2=0;
        for(int i=0; i<n; i++){
            if(i%2==0){
               sum1=sum1*10+arr[i];
            }else{
                sum2=sum2*10+arr[i];
            }
        }
        
        return sum1+sum2;
    }
};
*/