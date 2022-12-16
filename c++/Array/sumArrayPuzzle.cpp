// sum array puzzle

/*
Example 1:

Input:
5
3 6 4 8 9
Output: 27 24 26 22 21
Explanation: For the sum array S, at i=0 we
have 6+4+8+9. At i=1, 3+4+8+9. At i=2, we 
have 3+6+8+9. At i=3, we have 3+6+4+9. At
i = 4, we have 3+6+4+8. So S is 27 24 26 22 21.



Example 2:

Input:
6
4 5 7 3 10 1
*/

#include<iostream>
using namespace std;
int main(){
    int arr[5]={3,6,4,8,9};
    int n=5;
    
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }

    for(int i=0; i<n; i++){
        arr[i]=sum-arr[i];
        cout<<arr[i]<<" ";   // 27 24 26 22 21 
    }
    return 0;
}

// 27 24 26 22 21 