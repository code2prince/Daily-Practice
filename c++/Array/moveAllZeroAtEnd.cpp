// Move all zero at end of Array
/*
Given an array arr[] of N positive integers. 
Push all the zeros of the given array to the right end of the array while maitaining the order of non-zero elements.


Example 1:

Input:
N = 5
Arr[] = {3, 5, 0, 0, 4}
Output: 3 5 4 0 0
Explanation: The non-zero elements
preserve their order while the 0
elements are moved to the right.

Example 2:

Input:
N = 4
Arr[] = {0, 0, 0, 4}
Output: 4 0 0 0
Explanation: 4 is the only non-zero
element and it gets moved to the left.
*/



#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={2,0,4,5,0,0,9,5,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    // Brute force 
    
    // vector<int>v;
    // int cnt=0;
    // for(int i=0; i<n; i++){
    //     if(arr[i]!=0){
    //         v.push_back(arr[i]);
    //     }else{
    //         cnt++;
    //     }
    // }
    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }
    // for(int i=0; i<cnt; i++){
    //     cout<<"0"<<" ";
    // }
    
    //>>>>> optimal approach  ( 2 pointer Approach)
    int i=0; 
    for(int j=0; j<n; j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}