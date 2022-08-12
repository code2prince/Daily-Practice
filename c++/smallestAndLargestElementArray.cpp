#include<iostream>
using namespace std;
int main(){
    int arr[]={1,0,-9,2,3,4,5,99,101,8};
    int n=sizeof(arr)/sizeof(arr[0]);
     int smallest=INT_MAX;
     int max=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]<smallest)
            smallest=arr[i];

        if(arr[i]>max)
        max=arr[i];

    }
    cout<<smallest<<endl;
    cout<<max<<endl;
    return 0;
}