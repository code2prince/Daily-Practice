//Find triplets with zero sum
/*
Given an array arr[] of n integers. Check whether it contains a triplet that sums up to zero. 

Note: Return 1, if there is at least one triplet following the condition else return 0.

Example 1:

Input: n = 5, arr[] = {0, -1, 2, -3, 1}
Output: 1
Explanation: 0, -1 and 1 forms a triplet
with sum equal to 0.


Example 2:

Input: n = 3, arr[] = {1, 2, 3}
Output: 0
Explanation: No triplet with zero sum exists.
*/

/*
bool isTriplet(int arr[], int n){
    sort(arr,arr+n);
     for(int i=0; i<n; i++){
        int s=i+1;
        int e=n-1;
        while(s<e){
            int sum=arr[i] + arr[s]+ arr[e];
            if(sum==0){
                return true;
            }
            else if(sum>0){
                e--;
            }else{
                s++;
            }
        }
    }
    return false;
}
*/