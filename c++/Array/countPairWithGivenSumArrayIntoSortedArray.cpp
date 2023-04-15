// Count Pair with given sum into sorted array 

/*
You are given an array Arr of size N. You need to find all pairs in the array that sum to a number K. 
If no such pair exists then output will be -1. The elements of the array are distinct and are in sorted order.
Note: (a,b) and (b,a) are considered same. Also, an element cannot pair with itself, i.e., (a,a) is invalid.

Example 1:

â€‹Input:
n = 7
arr[] = {1, 2, 3, 4, 5, 6, 7}
K = 8
Output:
3
Explanation:
We find 3 such pairs that
sum to 8 (1,7) (2,6) (3,5)



â€‹Example 2:

Input:
n = 7
arr[] = {1, 2, 3, 4, 5, 6, 7}
K = 98 
Output:
-1 

*/


// 2nd Approach  >>>  two pointer Approach 

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=8;
    int i=0, j=n-1, sum=0, count=0;
    while(i<j){
        sum=arr[i]+arr[j];
        if(k==sum){
        count++;
        i++;
        j--;
        }else if( sum > k){
            j--;
        }else{
           i++;
        } 
    }
    if(count==0)
    cout<<"-1";
    cout<<"Count pair with given sum with sorted array: "<<count;
}

// Count pair with given sum with sorted array: 3






// Brute force solution 
/*******************************
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=8;
    int cnt=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==k){
                cnt++;
            }
        }
    }
    cout<<"total count: "<<cnt;
}

// total count: 3

*/
