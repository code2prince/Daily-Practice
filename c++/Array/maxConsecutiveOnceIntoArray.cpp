//Max Consecutive Ones


 /*

Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.


Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 2
*/

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,0,1,1,1,1,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);

    int cnt=0;
    int maxi=0;
    for(int i=0; i<n; i++){
        if(arr[i]==1){     // >> if any value equals to 1 then cnt++
            cnt++;
        }else{            // into else part if consecutive i's value into their then again count start with zero for cnt=0 
            cnt=0;
        }
        maxi=max(maxi,cnt);   //  update maximum value of with cnt and store into maxi 
    }
    cout<<"maximum 1's consecutive count:"<<maxi;

    //maximum 1's consecutive count:5
}