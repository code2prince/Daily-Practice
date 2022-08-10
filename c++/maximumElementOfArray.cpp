#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,5,3,6,5,88,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i]>max)
        max=arr[i];
    }
    cout<<"maximium element of array:"<<max;
    return 0;
}