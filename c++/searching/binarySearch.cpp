// binary search


/*
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

*/


 // find at which index its present

#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int k){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==k){
            return mid;
        }else if(k < arr[mid]){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={2,4,5,6,7,8};
    int n=6;
    int k=5;

    int index=binarySearch(arr,n,k);
    if(index==-1){
        cout<<"not present";
    }else{
        cout<<"present at Index : "<<index;
    }

}

// present at Index : 2