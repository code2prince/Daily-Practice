// find the unique element into an Array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,2,1};
    int n=5;
    // XOR 

    int ans=0;
    for(int i=0; i<n; i++){
        ans=ans^arr[i];
    }
    cout<<ans;  //3

    // 2nd Approach hashMap
    /*
    map<int,int>m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    for(auto itr:m){
        if(itr.second ==1){
            cout<<"unique: "<<itr.first; // : unique: 3
        }
    }
    */
}