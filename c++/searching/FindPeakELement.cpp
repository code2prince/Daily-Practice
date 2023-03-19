// find peak element index of mountain  >>>>

#include<iostream>
using namespace std;

int peak(int arr[], int size){
    int s=0;
    int e=size-1;
    while(s<e){
        int mid= s+(e-s)/2;
        if(arr[mid] < arr[mid+1]){
            s=mid+1;  
        }else{
            e=mid;
        }
    }
    return s;

    // // 2nd approach

    // int index=0;
    // for(int i=0; i<size; i++){
    //     if(arr[i]<arr[i+1]){
    //         index=i+1;
    //     }
    // }
    // return index;

    // 3d approach sort them and find the index of maximum among the array 


}
int main(){
    int arr[7]={1,3,4,5,9,4,1};
    int size=7;

    cout<<"Index of peak element : "<< peak(arr, size);
    return 0;
}

// Index of peak element : 4