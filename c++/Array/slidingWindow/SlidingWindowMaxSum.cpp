// Max Sum Using sliding window

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4,5,6,3,1,4,8,5,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int sum=0;
    int maxSum=INT_MIN;
    for(int i=0; i<k; i++){
        sum+=arr[i];
    }
    maxSum=sum;

    int i=0; 
    int j=k;
    while(j<n){
        sum=sum - arr[i];
        sum=sum + arr[j];
        i++;
        j++;
        maxSum=max(maxSum,sum);
    }
    cout<<"max sum value : "<<maxSum;
}

// max sum value : 20