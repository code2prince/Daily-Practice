// Segregate Even and Odd numbers   
// Eg. arr[]= {1,3,5,4,9,5,6,7,8,2}; >>>  {2 4 6 8 1 3 5 5 7 9}   even at one part and odd are at other part

#include <bits/stdc++.h>
using namespace std;
int main() {
   int arr[10]={1,3,5,4,9,5,6,7,8,2};
   int n=10;
   sort(arr,arr+n);
   vector<int>v;
   for(int i=0; i<n; i++){
       if(arr[i]%2==0)
       v.push_back(arr[i]);
   }
   for(int i=0; i<n; i++){
       if(arr[i]%2!=0)
       v.push_back(arr[i]);
   }
   for(int i=0; i<n; i++){
       arr[i]=v[i];
       cout<<arr[i]<<" ";
   }
   

    return 0;
}
// 2 4 6 8 1 3 5 5 7 9 
