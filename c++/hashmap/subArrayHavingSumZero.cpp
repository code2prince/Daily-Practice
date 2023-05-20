//Sub array having sum zero 0
/*
Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.

Example 1:

Input:
5
4 2 -3 1 6

Output: 
Yes

Explanation: 
2, -3, 1 is the subarray 
with sum 0.





Example 2:

Input:
5
4 2 0 1 6

Output: 
Yes

Explanation: 
0 is one of the element 
in the array so there exist a 
subarray with sum 0.

*/


/*

class Solution{
    public:
    bool subArrayExists(int arr[], int n)
    {
        map<int,int>m;
         int sum=0;
        for(int i=0; i<n; i++){
            m[sum]++;
            sum+=arr[i];
        
        if(m[sum]!=0){
            return true;
            }
        }
        return false;
    }   

*/
