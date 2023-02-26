//Kadane's Algorithm
/* 

Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number)
 which has the maximum sum and return its sum.


Example 1:

Input:
N = 5
Arr[] = {1,2,3,-2,5}
Output:
9
Explanation:
Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.



Example 2:

Input:
N = 4
Arr[] = {-1,-2,-3,-4}
Output:
-1
Explanation:
Max subarray sum is -1 
of element (-1)
*/
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,-2,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    int sum=0;
    int maxi=INT_MIN;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        maxi=max(maxi,sum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxi;   // 9
}
