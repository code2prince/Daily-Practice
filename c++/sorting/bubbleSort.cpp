// bubble sort

#include<iostream>
using namespace std;
int main(){
    int temp;
    int arr[]={2,1,4,6,0};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[j]>arr[j+1]){
                //swap
                temp= arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
        }
        
    }
    cout<<"sorted array:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
     
    
    return 0;
}

// sorted array:0 1 2 4 6 