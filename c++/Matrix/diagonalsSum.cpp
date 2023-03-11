// Diagonals Sum of a Matrix

/*
Given a square matrix of size n×n. Your task is to calculate the sum of its diagonals.
 

Example 1:

Input: matrix = {{1, 1, 1}, 
{1, 1, 1}, {1, 1, 1}}
Output: 6



Example 2:

Input: matrix = {{1, 2}, {3, 4}}
Output: 10
*/

#include<iostream>
using namespace std;
int main(){
    
    int matrix[3][3]={{1,1,1},
                     {1,1,1},
                     {1,1,1,}};

    int n=3;
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=matrix[i][i]  + matrix[i][n-i-1];
    }
    cout<<"ans: "<<sum;  // ans: 6
}