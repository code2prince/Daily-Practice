// Search In a Matrix

/*
Given a matrix mat[][] of size N x M, where every row and column is sorted in increasing order, and a number X is given. The task is to find whether element X is present in the matrix or not.


Example 1:

Input:
N = 3, M = 3
mat[][] = 3 30 38 
         44 52 54 
         57 60 69
X = 62
Output:
0
Explanation:
62 is not present in the
matrix, so output is 0





Example 2:

Input:
N = 1, M = 6
mat[][] = 18 21 27 38 55 67
X = 55
Output:
1
Explanation:
55 is present in the
matrix at 5th cell.
*/






/*

class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // Brute force 
	   // for(int i=0; i<N; i++){
	   //     for(int j=0; j<M; j++){
	   //         if(mat[i][j]==X){
	   //             return 1;
	   //         }
	   //         return 0;
	   //     }
	   // }
	   
	   // 2nd Approach  binary search
	   for(int i=0; i<N; i++){
	       if(binary_search(mat[i].begin(), mat[i].end(),X)==true)
	       return 1;
	   }
	   	   return 0;
	}
};
*/