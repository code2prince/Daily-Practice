// Transpose of a Matrix

/*

Write a program to find the transpose of a square matrix of size N*N. Transpose of a matrix is obtained by changing rows to columns and columns to rows.

Example 1:

Input:
N = 4
mat[][] = {{1, 1, 1, 1},
           {2, 2, 2, 2}
           {3, 3, 3, 3}
           {4, 4, 4, 4}}
Output: 
{{1, 2, 3, 4},  
 {1, 2, 3, 4}  
 {1, 2, 3, 4}
 {1, 2, 3, 4}} 
Example 2:




Input:
N = 2
mat[][] = {{1, 2},
           {-9, -2}}
Output:
{{1, -9}, 
 {2, -2}}
*/

/*

class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& matrix, int n)
    { 
        // code here 
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};

*/

#include <bits/stdc++.h>
using namespace std;
#define N 4
 
// This function stores transpose
// of A[][] in B[][]
void transpose(int A[][N], int B[][N])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
             swap(A[i][j],B[j][i]);
           // or >>   B[i][j] = A[j][i];
}
 
// Driver code
int main()
{
    int A[N][N] = { { 1, 1, 1, 1 },
                    { 2, 2, 2, 2 },
                    { 3, 3, 3, 3 },
                    { 4, 4, 4, 4 } };
 
    // Note dimensions of B[][]
    int B[N][N], i, j;
 
      // Function call
    transpose(A, B);
 
    cout << "Result matrix is \n";
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            cout << " " << B[i][j];
 
        cout << "\n";
    }
    return 0;
}

/*
Result matrix is 
 1 2 3 4
 1 2 3 4
 1 2 3 4
 1 2 3 4
*/