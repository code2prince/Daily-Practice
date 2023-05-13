// Remove Duplicate from array

/*
Input:
N = 6
A[] = {2,2,3,3,7,5}  // sorted or unsorted  might be both
Output: 2 3 7 5
Explanation: After removing the duplicate
2 and 3 we get 2 3 7 5.

*/
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    int arr[]={2,3,4,3,2,4,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    unordered_map<int,int>m;
    vector<int>v;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
        if(m[arr[i]]==1){
            v.push_back(arr[i]);
        }
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    // 2 3 4 7 


    return 0;
}
