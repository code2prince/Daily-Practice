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