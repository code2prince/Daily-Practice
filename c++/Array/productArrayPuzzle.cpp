//Product array puzzle
/* 

Given an array nums[] of size n, construct a Product Array P (of same size n)
 such that P[i] is equal to the product of all the elements of nums except nums[i].

 

Example 1:
Input:
n = 5
nums[] = {10, 3, 5, 6, 2}
Output:
180 600 360 300 900
Explanation: 
For i=0, P[i] = 3*5*6*2 = 180.
For i=1, P[i] = 10*5*6*2 = 600.
For i=2, P[i] = 10*3*6*2 = 360.
For i=3, P[i] = 10*3*5*2 = 300.
For i=4, P[i] = 10*3*5*6 = 900.



Example 2:
Input:
n = 2
nums[] = {12,0}
Output:
0 12
*/

/*

 vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here 
        vector<long long int>v;
        for(int i=0; i<n; i++){
            long long int ans=1;
            for(int j=0; j<n; j++){
            if(i!=j){
                ans=ans*nums[j];
                }
            }
            v.push_back(ans);
        }
        return v;
    }
};
*/

#include<bits/stdc++.h>

using namespace std;
int main(){
    int arr[]={10,3,5,6,2};
    int n=5;

    vector<int>v;
    for(int i=0; i<n; i++){
        int product=1;
        for(int j=0; j<n; j++){
            if(i!=j){
                product=product*arr[j];
            } 
        }
        v.push_back(product);
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";   /// 180 600 360 300 900 
    }

}
