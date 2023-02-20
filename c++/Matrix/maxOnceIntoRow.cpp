// Maximum no of 1's row


/*

Maximum no of 1's row

Given a boolean 2D array, where each row is sorted. Find the row with the maximum number of 1s.

Example 1:

Input:
N = 3, M = 4
Mat[] = {{0 1 1 1},
         {0 0 1 1},
         {0 0 1 1}}
Output: 0
Explanation: Row 0 has 3 ones whereas
rows 1 and 2 have just 2 ones.



Example 2:

Input: 
N = 2, M = 2
Mat[] = {{0 1},
         {1 1}}
Output: 1
Explanation: Row 1 has 2 ones whereas
row 0 has just a single one. 
*/

/*
class Solution
{
    public:
        int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
            int count=0;
            int max=0;
            int ans=0;
            for(int i=0; i<N; i++){
                for(int j=0; j<M; j++){
                    if(Mat[i][j]==1){
                        count++;
                    }
                }
                if(count>max){
                    max=count;
                    ans=i;
                }
                count=0;
            }
            return ans;
            
            


            >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
            // 2nd approach Hashmap

            
            int count=0;
            int ans=0;
            map<int,int>m;
            for(int i=0; i<N; i++){
                for(int j=0; j<M; j++){
                    if(Mat[i][j]==1){
                        m[i]++;
                    }
                }
            }
            for(auto it:m){
                if(it.second > count){
                    count=it.second;
                    ans=it.first;
                }
            }
            return ans;
        }
};

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int matrix[2][2]= {{0,1},
                      {1,1}};
    int n=2;
    int count=0;
    int max=0;
    int ans=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j]==1){
                count++;
            }
        }
        if(count>max){
            max=count;
            ans=i;
        }
        count=0;
    }
    cout<<ans;
    return 0;
}