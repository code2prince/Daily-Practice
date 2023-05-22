//Missing and Repeating element into array

#include <bits/stdc++.h>
using namespace std;
int main() {
   int arr[]={1,4,2,4,5};
   int n=sizeof(arr)/sizeof(arr[0]);
   
   int total=n*(n+1)/2;
   int repeat=0;
   int sum=0;
   sort(arr,arr+n);
 
   for(int i=0; i<n; i++){
       if(arr[i]==arr[i+1]){
           repeat=arr[i];  // or repeat=arr[i+1] >> both are same 
       }
       sum+=arr[i];
   }
   sum=sum-repeat;
   cout<<"missing: "<<total-sum<<endl;
   cout<<"repeating: "<<repeat;
    return 0;
}

   /*
 missing: 3
repeating: 4
*/