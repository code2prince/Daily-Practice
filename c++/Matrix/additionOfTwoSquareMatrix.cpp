// Addition of two square matrix

/*
Given two square matrices matrixA and matrixB of size n x n.  Find the addition of these two matrices.

Note :- You don't have to return anything in this question (Refer YourTask section).
 

Example 1:

Input: matrixA = {{1, 2}, {3, 4}},
matrixB = {{4, 3}, {2, 1}}
Output: {{5, 5}, {5, 5}}
Example 1:

Input: matrixA = {{2, 2}, {2, 2}},
matrixB = {{3, 3}, {3, 3}}
Output: {{5, 5},{5, 5}}

*/



/*

class Solution {
public:
    void Addition(vector<vector<int> >& matrixA, vector<vector<int>>&matrixB) {
        int n=matrixA.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                matrixA[i][j]+=matrixB[i][j];
                //or 
                // matrixA[i][j]=matrixA[i][j]+matrixB[i][j];
            }
        }
    }
};
*/