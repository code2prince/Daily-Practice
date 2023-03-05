// second largest array into array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4,3,5,2,5,2,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);


/*
// Brute force

    sort(arr,arr+n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";  // 2 2 3 4 5 5 7 8 9 
    }
    cout<<endl;
    cout<<arr[n-2];   //8

    */

  
  /*
  //2nd method >> better approach ****************

   int largest=arr[0];
   for(int i=0; i<n; i++){
    if(arr[i]> largest){
        largest=arr[i];
    }
   }
   cout<< "largest: " <<largest<<endl;  // largest: 9

   int secLargest=-1;
   for(int i=0; i<n; i++){
    if(arr[i] > secLargest  && arr[i]!=largest){
        secLargest=arr[i];
    }
   }
   cout<<"second largest: " <<secLargest<<endl;   // second largest: 8

*/

//3rd method >> optimal approach ********************
int largest=arr[0];
int secLargest=-1;

for(int i=0; i<n; i++){
    if(arr[i] > largest ){
        secLargest=largest;
        largest=arr[i];
    }else if(arr[i] < largest && arr[i]> secLargest){
        secLargest=arr[i];
    }
}
cout<<"secLargest: "<<secLargest;  //secLargest: 8

}