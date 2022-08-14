#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,0,5,4,3,9};
    int k;
    
    cout<<"Enter the Kth value:";
    cin>>k;
    int temp;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[j]> arr[j+1]){
                //swap
                temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    
    cout<<"Smallest kth element is:"<<arr[k-1];
    return 0;
}