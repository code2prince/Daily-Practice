// Rotate matrix by 90 degree

/*
Given a square matrix of size N x N. The task is to rotate it by 90 degrees in anti-clockwise direction without using any extra space. 

Example 1:

Input:
N = 3 
matrix[][] = {{1, 2, 3},
              {4, 5, 6}
              {7, 8, 9}}
Output: 
Rotated Matrix:
3 6 9
2 5 8
1 4 7



Example 2:

Input:
N = 2
matrix[][] = {{1, 2},
              {3, 4}}
Output: 
Rotated Matrix:
2 4
1 3
*/




/*

class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 

        // >>>>>> transpose
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        //>>>>>>>> row wise inter-change
        for(int i=0; i<n/2; i++){
            for(int j=0; j<n; j++){
                swap(matrix[i][j], matrix[n-i-1][j]);
            }
        }
    } 
};

*/