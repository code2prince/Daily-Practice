//Number of Subarrays of 0's
/*

You are given an array arr  of length N of 0's and 1's. Find the total number of subarrays of 0's

Example 1:

Input:
N = 4
arr[] = {0, 0, 1, 0}
Output:
4
Explanation:
Following are the subarrays of
length 1: {0}, {0}, {0} - 3
length 2: {0, 0} - 1
Total Subarrays: 3 + 1 = 4
Example 2:

Input:
N = 4
arr[] = {0, 0, 0, 0}
Output:
10
Explanation:
Following are the subarrays of
length 1: {0}, {0}, {0}, {0} - 4
length 2: {0, 0}, {0, 0}, {0, 0} - 3
length 3: {0, 0, 0}, {0, 0, 0} - 2
length 4: {0, 0, 0, 0} - 1
Total Subarrays: 4 + 3 + 2 + 1 = 10

*/

#include<iostream>
using namespace std;
int main(){
    int arr[]={0,0,1,0};
    int n=4;

    int ans=0;
    int cnt=0;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            cnt++;
        }else{
            ans+=(cnt*(cnt+1))/2;
            cnt=0;
        }
    }
    if(cnt!=0){
        ans+=(cnt*(cnt+1))/2;
    }
    cout<<"sub array with sum 0's: "<<ans;
}

// sub array with sum 0's: 4 