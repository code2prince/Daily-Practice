// find the peak element of the array

/*
Given an array in such a way that the elements stored in array are in increasing order initially and then after reaching to a peak element,
 the elements stored are in decreasing order. Find the highest element.
Note: A[i] != A[i+1]
 

Example 1:

Input:
11
1 2 3 4 5 6 5 4 3 2 1
Output: 6
Explanation: Highest element is 6.



Example 2:

Input:
5
1 2 3 4 5
Output: 5
Explanation: Highest element is 5.


*/

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,8,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
// 1st approach using finding maximum 
    int maxi=0;
    for(int i=0; i<n; i++){
        maxi=max(maxi,arr[i]);
    }
    cout<<" peak element: "<<maxi;

}