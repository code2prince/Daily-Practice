// Count Pair with given sum    >>>>>>>>>for  unsorted arrray

/*
Given an array of N integers, and an integer K, 
find the number of pairs of elements in the array whose sum is equal to K.


Example 1:

Input:
N = 4, K = 6
arr[] = {1, 5, 7, 1}
Output: 2
Explanation: 
arr[0] + arr[1] = 1 + 5 = 6 
and arr[1] + arr[3] = 5 + 1 = 6.




Example 2:

Input:
N = 4, K = 2
arr[] = {1, 1, 1, 1}
Output: 6
Explanation: 
Each 1 will produce sum 2 with any 1.

*/


/*


class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // Brute Force approach 
********************************************
        // int cnt=0;
        // for(int i=0; i<n; i++){
        //     for(int j=i+1;j<n; j++){
        //         if(arr[i]+arr[j]==k)
        //         cnt++;
        //     }
        // }
        // return cnt;
        
        //2nd approach  ****** <HashMap>*******************************************
        unordered_map<int,int>m;
        int ans=0;
        for(int i=0; i<n; i++){
            if(m.find(k-arr[i])!=m.end())
            ans+=m[k-arr[i]];
            m[arr[i]]++;
        }
        return ans; 


        ************************************
        // Or  Easy way......
        unordered_map<int,int>m;
        int ans=0;
        for(int i=0; i<n; i++){
            int b= k-arr[i];
            if(m[b]){
                ans+=m[b];
            }
            m[arr[i]]++;
        }
        return ans;
    }
};

*/

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,5,1,7};   // unsorted array 
//     int k=6;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int count=0;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i]+arr[j]==k){
//                 count++;
//             }
//         }
//     }
//     cout<<"Total pairs count: "<<count;
// }



// Total pairs count: 2

#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int arr[]={1,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=2;

    unordered_map<int,int>m;
    int count=0;
    for(int i=0; i<n; i++){
        int b= target-arr[i];
        if(m[b]){
            count+=m[b];
        }
        m[arr[i]]++;
    }
    cout<<" total count: "<<count;
    
}

//  total count: 6