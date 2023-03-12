//Binary matrix having maximum number of 1s
/*

Given a binary matrix (containing only 0 and 1) of order NxN. 
All rows are sorted already, We need to find the row number with the maximum number of 1s. Also, find the number of 1s in that row.
Note:

1. In case of a tie, print the smaller row number.
2. Row number should start from 0th index.

Example 1

Input:
N=3
mat[3][3] = {0, 0, 1, 
              0, 1, 1, 
              0, 0, 0}
Output:
Row number = 1
MaxCount = 2
Explanation:
Here, max number of 1s is in row number 1
and its count is 2.



Example 2

Input:
N=3
mat[3][3] = {1, 1, 1, 
              1, 1, 1, 
              0, 0, 0}
Output:
Row number = 0
MaxCount = 3
*/



/*
class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int N) {
        //code here
        int rowNumber=0;
        int maxCount=0;
        for(int i=0; i<N; i++){
           int cnt=0; // for each and every row count will start with zero
            for(int j=0; j<N; j++){
            if(mat[i][j]==1)
                cnt++;
            }
            if(maxCount<cnt){
                maxCount=cnt;
                rowNumber=i;
            }
        }
        return {rowNumber,maxCount};
    }
};

*/


#include<iostream>
using namespace std;
int main(){
    int mat[3][3]={
                {0,0,1},
                {1,1,1},
                {0,1,1}};
    int n=3;
    int rowNumber=0;
    int maxCount=0;
    for(int i=0; i<n; i++){
        int cnt=0; // for each and every row count will start with zero
        for(int j=0; j<n; j++){
            if(mat[i][j]==1){
                cnt++;
            }
        }
        if(maxCount < cnt){
            maxCount=cnt;
            rowNumber=i;
        }
    }
    cout<<"maximum count="<<maxCount<<endl;  //3
    cout<<"row no of max count: "<<rowNumber<<endl;  //1
}
/*
maximum count=3
row no of max count: 1
*/