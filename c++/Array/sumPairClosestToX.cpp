// Sum Pair Closest to X

/*
Given a sorted array arr[] of size N and a number X, find a pair in array whose sum is closest to X.

Example 1:

Input:
N = 6, X = 54
arr[] = {10, 22, 28, 29, 30, 40}
Output: 22 30
Explanation: As 22 + 30 = 52 is closest to 54.



Example 2:

Input:
N = 5, X = 10
arr[] = {1, 2, 3, 4, 5}
Output: 4 5
Explanation: As 4 + 5 = 9 is closest to 10.
*/



/*


class Solution{   
public:
    vector<int> sumClosest(vector<int>arr, int x)
    {
        int i=0; 
        int j=arr.size()-1;
        int diff=INT_MAX;
        int left=0, right=0;
        while(i<j){
           if( abs((arr[i]+arr[j])-x) < diff){
               left=arr[i];
               right=arr[j];
               diff=abs((arr[i]+arr[j])-x);
           }
            if(arr[i]+arr[j]<x){
                i++;
            }else{
                j--;
            }
        }
        return {left,right};
    }
};
*/