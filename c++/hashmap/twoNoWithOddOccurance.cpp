/*
Two numbers with odd occurrences
****************************************

 

Given an unsorted array, Arr[] of size N and that contains even number of occurrences for all numbers except two numbers.
 Find the two numbers in decreasing order which has odd occurrences.

Example 1:

Input:
N = 8
Arr = {4, 2, 4, 5, 2, 3, 3, 1}
Output: {5, 1} 
Explaination: 5 and 1 have odd occurrences.



Example 2:

Input:
N = 8
Arr = {1 7 5 7 5 4 7 4}
Output: {7, 1}
Explaination: 7 and 1 have odd occurrences.
*/

#include<bits/stdc++.h>
#include<map>
using namespace std;
int main(){
    int arr [8]= {4, 2, 4, 5, 2, 3, 3, 1};
    int n=8;

    map<int,int>m;
    vector<int>ans;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    for(auto itr=m.begin(); itr!=m.end(); itr++){
        if(itr->second %2!=0){
            ans.push_back(itr->first);
        }
    }
    sort(ans.begin(), ans.end());
    reverse(ans.begin(), ans.end());

    // cout<< ans;

    return 0;

}

/*

class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        // code here
        map<int,int>m;
        vector<long long int>ans;
        for(int i=0; i<N; i++){
            m[Arr[i]]++;
        }
        for(auto itr=m.begin(); itr!=m.end(); itr++){
            if(itr->second%2!=0){
                ans.push_back(itr->first);
            }
        }
        sort(ans.begin(), ans.end());
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
*/