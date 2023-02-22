// Triplet Sum in Array


/*
Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.


Example 1:

Input:
n = 6, X = 13
arr[] = [1 4 45 6 10 8]
Output:
1
Explanation:
The triplet {1, 4, 8} in 
the array sums up to 13.





Example 2:

Input:
n = 5, X = 10
arr[] = [1 2 4 3 6]
Output:
1
Explanation:
The triplet {1, 3, 6} in 
the array sums up to 10.
*/

#include<bits/stdc++.h>
using namespace std;

bool tripleSum(int arr[], int n, int target){
     sort(arr,arr+n);
    for(int i=0; i<n; i++){
        int s=i+1;
        int e=n-1;
        while(s<e){
            if(arr[i] + arr[s] + arr[e] == target ){
                return true;
            }else if(arr[i] + arr[s] + arr[e] > target){
                e--;
            }else{
                s++;
            }
        }
    }
    return false;
}
int main(){
    int arr[]={1,2,4,3,6};
    int n=5;
    int target=10;


   if(tripleSum(arr,n,target)){
    cout<<"found";
   }else{
    cout<<" not";
   }
}

// found