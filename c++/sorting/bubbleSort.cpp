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






// Bubble sort using recursion.............>>>>>>>>>>


// #include <iostream>
// using namespace std;

// int bubbleSort(int arr[], int n){
//      for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j+1];
//                 arr[j+1]=arr[j];
//                 arr[j]= temp;
//             }
//         }
       
//     }
// }
// void print(int arr[], int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" "; 
//     }
// }

// int main() {
//     int arr[5]={2,5,7,1,3};
//     int n=5;
//     bubbleSort(arr,n);
   
//     print(arr,n);
    
//     return 0;
// }