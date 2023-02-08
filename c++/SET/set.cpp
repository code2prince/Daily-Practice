// Remove duplicate by using set

#include <iostream>
#include<set>
using namespace std;
int main() {
   int arr[]={1,2,3,2,6,1,2,1,1};
   int n=sizeof(arr)/sizeof(arr[0]);
   set<int>s;
   for(int i=0; i<n; i++){
       s.insert(arr[i]);
       
   }
   
  for(auto i:s){
       
      cout<<i<<" ";   // 1 2 3 6
  }
  // or 
// for(auto itr=s.begin(); itr!=s.end(); itr++)
// cout<<*itr<<" ";

  // cout<<s.size();  //4
   
    return 0;
}
