// find first and last occurance of array 

#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int k){
    int s=0;
    int e=size-1;
    
    int ans=-1;

    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }
        if(k < arr[mid]){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return ans;
}

int lastOcc(int arr[], int size, int k){
    int s=0; 
    int e=size-1;
    int ans=-1;

    while(s<=e){
        int mid=s+(e-s)/2;

        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
        }
        if(k < arr[mid]){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return ans;
}
int main(){
    int arr[8]={1,2,4,5,6,7,7,9};
    int size=8;
    int k=7;

    cout<<"first index of "<< k << " is: " <<firstOcc(arr, size, k)<<endl;

    cout<<"last index of "<< k  << " is: "<<lastOcc(arr, size, k);


    return 0;

}

//first index of 7 is: 5
//last index of 7 is: 6
