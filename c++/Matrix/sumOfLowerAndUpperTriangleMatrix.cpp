// sum of lower and upper traingle of matrix

/*
Given a square matrix of size N*N, print the sum of upper and lower triangular elements.
 Upper Triangle consists of elements on the diagonal and above it. The lower triangle consists of elements on the diagonal and below it. 

Example 1:

Input:
N = 3 
mat[][] = {{6, 5, 4},
           {1, 2, 5}
           {7, 9, 7}}
Output: 29 32
Explanation:
The given matrix is
6 5 4
1 2 5
7 9 7
The elements of upper triangle are
6 5 4
  2 5
    7
Sum of these elements is 6+5+4+2+5+7=29
The elements of lower triangle are
6
1 2
7 9 7
Sum of these elements is 6+1+2+7+9+7= 32.





Example 2:

Input:
N = 2
mat[][] = {{1, 2},
           {3, 4}}
Output: 7 8
Explanation:
Upper triangular matrix:
1 2
  4
Sum of these elements are 7.
Lower triangular matrix:
1
3 4
Sum of these elements are 8.
*/


/*

class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {

        vector<int>ans;
        int lower_sum=0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                lower_sum+=matrix[i][j];
            }
        }
        
        int upper_sum=0;
        for(int i=0; i<n; i++){
            for(int j=n-1; j>=i; j--){
                upper_sum+=matrix[i][j];
            }
        }

//>>> first push upper than lower sum becase they are asking into same manner

        ans.push_back(upper_sum);  
        ans.push_back(lower_sum);
        return ans;
    }
};

*/