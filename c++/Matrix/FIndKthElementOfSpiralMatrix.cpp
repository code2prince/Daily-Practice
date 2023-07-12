//Find kth element of spiral matrix
/*
Given a matrix with n rows and m columns. Your task is to find the kth element which is obtained while traversing the matrix spirally.
 You need to complete the method findK which takes four arguments the first argument is the matrix A and the next two arguments will be n and m denoting the size
  of the matrix A and then the forth argument is an integer k. 
 The function will return the kth element obtained while traversing the matrix spirally.

Example 1:

Input:
n = 4, m = 4, k = 10
A[][] = {{1  2  3  4},
         {5  6  7  8},
         {9  10 11 12},
         {13 14 15 16}}
Output:
13
Explanation:

The spiral order of matrix will look like 1->2->3->4->8->12->16->15->14->13->9->5->6->7->11->10.
 So the 10th element in this order is 13. 


Example 2:

Input:
n = 3, m = 3, k = 4
A[][] = {{1 2 3},
         {4 5 6},
         {7 8 9}}
Output:
6
Explanation:
The spiral order of matrix will look like 1->2->3->6->9->8->7->4->5. So the 4th element in this order is 6.
*/


/*
class Solution
{
    public:
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		int left=0, right=m-1, top=0, bottom=n-1;
 		int cnt=0;
 		while(top<=bottom && left<=right){
 		    for(int i=left; i<=right; i++){
 		        cnt++;
 		        if(cnt==k){
 		            return a[top][i];
 		        }
 		    }
 		    top++;
 		    for(int i=top; i<=bottom; i++){
 		        cnt++;
 		        if(cnt==k){
 		            return a[i][right];
 		        }
 		    }
 		    right--;
 		    if(top<=bottom){
 		        for(int i=right; i>=left; i--){
 		            cnt++;
 		            if(cnt==k){
 		                return a[bottom][i];
 		            }
 		        }
 		        bottom--;
 		    }
 		    if(left<=right){
 		        for(int i=bottom; i>=top; i--){
 		            cnt++;
 		            if(cnt==k){
 		                return a[i][left];
 		            }
 		        }
 		        left++;
 		    }
 		}
 		return 0;
    }
};
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n = 3, m = 3, k = 4;
   int a[n][m] ={{1 ,2 ,3},
   				{4 ,5 ,6},
				{7, 8 ,9}};

	int left=0, right=m-1, top=0, bottom=n-1;
 		int cnt=0;
 		while(top<=bottom && left<=right){
 		    for(int i=left; i<=right; i++){
 		        cnt++;
 		        if(cnt==k){
 		            cout<< a[top][i];
 		        }
 		    }
 		    top++;
 		    for(int i=top; i<=bottom; i++){
 		        cnt++;
 		        if(cnt==k){
 		            cout<< a[i][right];
 		        }
 		    }
 		    right--;
 		    if(top<=bottom){
 		        for(int i=right; i>=left; i--){
 		            cnt++;
 		            if(cnt==k){
 		                cout<< a[bottom][i];
 		            }
 		        }
 		        bottom--;
 		    }
 		    if(left<=right){
 		        for(int i=bottom; i>=top; i--){
 		            cnt++;
 		            if(cnt==k){
 		                cout<< a[i][left];
 		            }
 		        }
 		        left++;
 		    }
 		}
 		return 0;
}

// output : 6