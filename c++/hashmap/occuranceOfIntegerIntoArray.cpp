// occurance of interger into array
/*
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

*/


// into unordered_map ordered orders are in random manner

/*
5 1
4 1
3 2
1 2
2 2
*/

// but into map orders are in ordered manner only

#include<iostream>
#include<map>
using namespace std;
int main(){
    int arr[8]={1,2,3,2,1,4,3,5};
    int n=8;

    map<int, int>m;

    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }

    for(auto itr=m.begin(); itr!=m.end(); itr++){
        cout<<itr->first <<" "<< itr->second <<endl;
    }

}
// by using map we get orederd manner 
/*
1 2
2 2
3 2
4 1
5 1
*/