// Union of two arrays

/*
Example 1:

Input:
5 3
1 2 3 4 5
1 2 3
Output: 
5
Explanation: 
1, 2, 3, 4 and 5 are the
elements which comes in the union set
of both arrays. So count is 5.




Example 2:

Input:
6 2 
85 25 1 32 54 6
85 2 
Output: 
7
Explanation: 
85, 25, 1, 32, 54, 6, and
2 are the elements which comes in the
union set of both arrays. So count is 7.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr1[4]={1,2,4,5};
    int arr2[3]={1,3,5};
    int n1=4,n2=3;

    set<int>s;
    for(int i=0; i<n1; i++){
        s.insert(arr1[i]);
    }
    for(int i=0; i<n2; i++){
        s.insert(arr2[i]);
    }
    cout<<s.size()<<endl;   //5 

    
    for(auto it=s.begin(); it!=s.end(); it++){
        cout<<*it<<" ";   // 1 2 3 4 5 
    }
    return 0;
}