//Unique Number of Occurrences
/*
Given an array arr of N integers, the task is to check whether the frequency of the elements in the array is unique or not.
 Or in other words, there are no two distinct numbers in array with equal frequency. If all the frequency is unique then return true,
  else return false.

Example 1:

Input:
N = 5
arr = [1, 1, 2, 5, 5]
Output:
false
Explanation:
The array contains 2 (1’s), 1 (2’s) and 2 (5’s), since the number of frequency of 1 and 5 are the same i.e. 2 times. 
Therefore, this array does not satisfy the condition.


Example 2:

Input:
N = 10
arr = [2, 2, 5, 10, 1, 2, 10, 5, 10, 2]
Output:
true
Explanation:
Number of 1’s -> 1
Number of 2’s -> 4
Number of 5’s -> 2
Number of 10’s -> 3.
Since, the number of occurrences of elements present in the array is unique. Therefore, this array satisfy the condition.

*/

/*
class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        
        //------1 st approach --------------------------------
        
        map<int,int>m,mp;
        for(int i=0; i<n; i++){
            m[arr[i]]++;
        }
        for(auto itr:m){
            mp[itr.second]++;
        }
        
        for(auto itr:mp){
            if(itr.second>1){
                return false;
            }
        }
    return true;
    
  ///----------------- 2nd approach-----------------------------------  
    map<int,int>m;
    set<int>st;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    for(auto itr:m){
        st.insert(itr.second);
    }
    if(st.size()==m.size()){
        return true;
    }
    return false;
    
    }
};
*/

#include<bits/stdc++.h>
using namespace std;

    int main(){
    int arr[] = {2, 2, 5, 10, 1, 2, 10, 5, 10, 2};
    int n=10;
    map<int,int>m;
    set<int>st;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    for(auto itr:m){
        st.insert(itr.second);
    }

    if(st.size() == m.size()){
        cout<<true;
    }else{
        cout<<false;
    }
}