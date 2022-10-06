// binary search

#include<iostream>
using namespace std;

bool binarySearch(int arr[], int size, int k){
    int s=0;
    int e=size-1;

    while(s<=e){
        int mid= s+(e-s)/2;
        if(arr[mid]==k){
            return true;
        }if(k<arr[mid]){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return false;
}

int main(){
    //>>>>>for binary search array must be sorted order 
    int arr[5]={2,3,4,5,7};
    int size=5;
    int k=7;
    if(binarySearch(arr, size , k)){
        cout<<"found";
    }else{
        cout<<"not";
    }
    return 0;
}

// found