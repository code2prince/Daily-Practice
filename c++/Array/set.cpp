// Set
// remove duplicate and return into sorted order 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4,3,5,1,3,5,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    set<int>s;

    for(int i=0; i<n;i++){
        s.insert(arr[i]);
    }
    /*
    for(auto i:s){
        cout<<i<<" ";
    }
    */
    
    //or

    vector<int>v(s.begin(),s.end());
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

}