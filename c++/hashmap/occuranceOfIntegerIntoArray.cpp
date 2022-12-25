// occurance of interger into array

#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main(){
    int arr[8]={1,2,3,2,1,4,3,5};
    int n=8;

    unordered_map<int,int>m;
    for(int i=0; i<n; i++){
        int key=arr[i];
        m[key]++;
        //  or >>  m[arr[i]]++
    }

    for(auto itr=m.begin(); itr!=m.end(); itr++){
        cout<<itr->first <<" "<< itr->second<<endl;
    }
}


/*
5 1
4 1
3 2
1 2
2 2
*/