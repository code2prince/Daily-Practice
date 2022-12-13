#include<iostream>
using namespace std;

int main(){
  int arr[]={2,3,4,3,2}; 
   int ans=0;
   int s=sizeof(arr)/sizeof(arr[0]);
   for(int i=0; i<s; i++) {
    ans=ans^arr[i];
   }
   cout<<"ans:"<<ans;

}




// 2nd approach  >> hashmap

/*
 unordered_map<int,int>m;
      for(int i=0; i<n; i++){
          m[arr[i]]++;
      }
      for(int i=0; i<n; i++){
          int key=arr[i];

          >>>>>>>>>>>>>>>>>>
          // auto temp= m.find(key);
          // if(temp->second==1){
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

            >>or 

            if(m[arr[i]]==1){      // or >> if(m[key]==1){
              return key;
          }
      }
      return 0;
    } 
*/