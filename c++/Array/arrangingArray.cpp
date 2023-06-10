//Arranging the array
/*
You are given an array of size N. Rearrange the given array in-place such that all the negative numbers occur before all non-nagative numbers.(Maintain the order of all -ve and non-negative numbers as given in the original array).
Example 1:

Input:
N = 4
Arr[] = {-3, 3, -2, 2}
Output:
-3 -2 3 2
Explanation:
In the given array, negative numbers
are -3, -2 and non-negative numbers are 3, 2. 



Example 2:

Input:
N = 4
Arr[] = {-3, 1, 0, -2}
Output:
-3 -2 1 0
Explanation:
In the given array, negative numbers
are -3, -2 and non-negative numbers are 1, 0.

*/



/*
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends
class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
            vector<int>v;
            for(int i=0; i<n; i++){
                if(arr[i]<0){
                    v.push_back(arr[i]);
                }
            }
            for(int i=0; i<n; i++){
                if(arr[i]>=0){
                    v.push_back(arr[i]);
                }
            }
            
            for(int i=0; i<v.size(); i++){
                arr[i]=v[i];
            }
        }
};

*/

// other approach 

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={2,6,-2,0,-3};
    int n=5;
    vector<int>v,v2;
    
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            v.push_back(arr[i]);
        }
    }
    
    for(int i=0; i<n; i++){
        if(arr[i]>=0){
            v2.push_back(arr[i]);
        }
    }
    vector<int>ans;
    sort(v.begin(),v.end());
    sort(v2.begin(),v2.end());
    reverse(v2.begin(),v2.end());
    
    
    
    for(int i=0; i<v.size(); i++){
        ans.push_back(v[i]);
        }
        
      for(int i=0; i<v2.size(); i++){
        ans.push_back(v2[i]);
        }
        
          for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";    //-3 -2 6 2 0
        }

    return 0;
}