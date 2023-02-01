// rotate matrix by 180 degree

/*

Given a square matrix of size N X N, turn it by 180 degrees in anticlockwise direction without using extra memory.
 

Example 1:

Input: N = 4, 
matrix = {{1, 2, 3, 4}, 
          {5, 6, 7 ,8}, 
          {9, 10, 11, 12},
          {13, 14, 15, 16}}
Output: {{16, 15, 14, 13}, 
         {12, 11, 10, 9}, 
         {8, 7, 6, 5}, 
         {4, 3, 2, 1}}



Example 2:

Input: N = 2,
matrix = {{1, 2},
          {3, 4}}
Output: {{4, 3}, 
         {2, 1}}
*/


/*


class Solution {
public:
    void rotate(vector<vector<int> >& matrix) {
        int n=matrix.size();
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i=0;i<n; i++){
            for(int j=0; j<n-i; j++){
                swap(matrix[i][j], matrix[n-1-j][n-1-i]);
            }
        }
    }
};

*/