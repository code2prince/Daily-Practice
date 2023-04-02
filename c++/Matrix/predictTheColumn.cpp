//Predict the Column
/*

Given a matrix(2D array) M of size N*N consisting of 0s and 1s only. The task is to find the column with maximum number of 0s.

Example:

Input:
N = 3
M[][] = {{1, 1, 0},
         {1, 1, 0},
         {1, 1, 0}}
Output:2
Explanation:
2nd column (0-based indexing) 
is having 3 zeros which is 
maximum among all columns.
 

Your Task:
Your task is to complete the function columnWithMaxZero() which should return the column number with the maximum number of zeros.
 If more than one column exists, print the one which comes first.

 */


/*
class Solution{
    public:
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        int index=0;
        int maxi=INT_MIN;
        
        for(int i=0; i<N; i++){
            int cnt=0;
            for(int j=0; j<N; j++){
                if(arr[j][i]==0){
                    cnt++;
                }
            }
            if(cnt > maxi){
                index=i;
                }
            maxi=max(maxi,cnt);
        }
        return index;
        
        
    }
};

*/