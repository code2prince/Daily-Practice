//Leaders in an array
/*

Given an array A of positive integers. Your task is to find the leaders in the array.
 An element of array is leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader. 

 

Example 1:

Input:
n = 6
A[] = {16,17,4,3,5,2}
Output: 17 5 2
Explanation: The first leader is 17 
as it is greater than all the elements
to its right.  Similarly, the next 
leader is 5. The right most element 
is always a leader so it is also 
included.
 


Example 2:

Input:
n = 5
A[] = {1,2,3,4,0}
Output: 4 0
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={16,17,4,3,5,2};
    int n=6;
    
    int maxi=arr[n-1];      // or >> maxi =INT_MIN;

    vector<int>v;
    for(int i=n-1; i>=0; i--){
        if(arr[i] >= maxi){
            v.push_back(arr[i]);
        }
        maxi=max(maxi,arr[i]);
    }
    reverse(v.begin(), v.end());

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";  // 17 5 2 
    }
}