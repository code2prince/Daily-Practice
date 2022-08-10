#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,1,4,5,6,11};
    int n=sizeof(arr)/sizeof(arr[0]);

    int smallest=INT_MAX;

    for(int i=0; i<n; i++){
        if(arr[i]<smallest)
        smallest=arr[i];
    }
    cout<<"smallest element of array:"<<smallest;
    return 0;
}