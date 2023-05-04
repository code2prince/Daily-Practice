// Missing no in Array

// arr[]={5,7,9,13,15,17};  >> 11 is misssing into AP series 


#include <iostream>
using namespace std;
int main() {
    int arr[]={5,7,9,13,15,17};
    int n=sizeof(arr)/sizeof(arr[0]);
    int N=n+1;
    int d=arr[1]-arr[0];
    
    int totalSum=0;
    totalSum=N*(2*arr[0] +(N-1)*d)/2;
    cout<<"total sum: "<<totalSum<<endl;  //total sum: 77

   
    for(int i=0; i<n; i++){
       totalSum-=arr[i];
    }
    cout<<"missing no: "<<totalSum;  // missing no: 11

}