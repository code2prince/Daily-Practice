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
}
int main(){
    int arr[7]={1,3,4,5,9,4,1};
    int size=7;

    cout<<"Index of peak element : "<< peak(arr, size);
    return 0;
}

// Index of peak element : 4