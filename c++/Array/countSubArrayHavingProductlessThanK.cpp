//Count the subarrays having product less than k
/*

Given an array of positive numbers, the task is to find the number of possible contiguous subarrays having product less than a given number k.

Example 1:

Input : 
n = 4, k = 10
a[] = {1, 2, 3, 4}
Output : 
7
Explanation:
The contiguous subarrays are {1}, {2}, {3}, {4} 
{1, 2}, {1, 2, 3} and {2, 3} whose count is 7.


Example 2:

Input:
n = 7 , k = 100
a[] = {1, 9, 2, 8, 6, 4, 3}
Output:
16
*/




/*

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int cnt=0;
        long long mult=1;
        for(int i=0; i<n; i++){
            if(a[i]<k){
                cnt++;
            }
            mult=a[i];
            for(int j=i+1; j<n; j++){
                mult*=a[j];
                if(mult<k){
                    cnt++;
                }else{
                    break;
                }
            }
        }
        return cnt;
    }
};
*/


#include<iostream>
using namespace std;
int main(){
    int arr[]={1, 9, 2, 8, 6, 4, 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=100;

    int cnt=0;
    int mult=1;
    for(int i=0; i<n; i++){
        if(arr[i]<k){
            cnt++;
        }
        mult=arr[i];

        for(int j=i+1; j<n; j++){
            mult*=arr[j];
            if(mult < k){
                cnt++;
            }else{
                break;
            }
        }
    }
    cout<<"total count : "<<cnt;
}

// total count : 16