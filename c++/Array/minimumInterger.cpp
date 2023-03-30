//Minimum Integer
/*
You are given an array A of size N. Let us denote S as the sum of all integers present in the array. Among all integers present in the array, find the minimum integer X such that S ≤ N*X.

Example 1:

Input:
N = 3,
A = { 1, 3, 2}
Output:
2
Explanation:
Sum of integers in the array is 6.
since 6 ≤ 3*2, therefore 2 is the answer.



Example 2:

Input:
N = 1,
A = { 3 }
Output:
3
Explanation:
3 is the only possible answer*/

/*
class Solution {
  public:
    int minimumInteger(int N, vector<int> &A) {
        // code here
        long long sum=0;
        for(int i=0; i<N ; i++){
            sum+=A[i];
        }
        double x=double(sum)/ double(N);
        int ans=INT_MAX;
        for(int i=0; i<N; i++){
            if( A[i] >= x){
                ans=min(ans,A[i]);
            }
        }
        return ans;
       
    }
};
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={3,2,1};
    int n=3;

    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    double x= sum/n;
    int ans=INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i] >=x){
            ans=min(ans,arr[i]);
        }
    }
    cout<<"min element: " <<ans;
}

// min element: 2