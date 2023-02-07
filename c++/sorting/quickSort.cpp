// quickSort    >>>> taking last as pivot
#include <iostream>
using namespace std;
int  partition(int arr[], int s, int e, int pivot){
    int p=s;
    for(int i=s; i<=e; i++){
        if(arr[i]<=pivot){      // if any value is less than or equals to the pivot element then swap it or move it to left most part
            swap(arr[p],arr[i]);
            p++;
        }
    }
    p--;
    return p;
}
void quick(int arr[], int s, int e){
    if(s<=e){
        int pivot=arr[e];
        int p= partition(arr,s,e, pivot);
        quick(arr,s,p-1);  //  recursive quickSort call for left partition
        quick(arr,p+1,e);  //  recursive quickSort call for right partition
    }
}
int main() {
    int arr[]={2,4,3,12,4,31,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    quick(arr,0,n-1); // function call   (s=0)  and   (e=n-1)
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// 2 3 3 4 4 4 12 31






// // Quick Sort   >>> taking first as pivot 


// #include<iostream>
// using namespace std;
// int partition(int arr[], int s, int e){
//     int pivot=arr[s];
//     int count=0;
//     for(int i=s+1; i<=e; i++){
//         if(arr[i]<=pivot){
//              count++;
//         }
//     }
//     int pivotIndex=s+count;
//     swap(arr [pivotIndex], arr[s]);

//     int i=s, j=e;
//     while(i<pivotIndex && j> pivotIndex){
//         while(arr[i]<pivot)
//         i++;

//         while(arr[j]>pivot)
//         j--;
        
//         if(i<pivotIndex && j> pivotIndex){
//             swap(arr[i++], arr[j--]);
//         }
//     }
//     return pivotIndex;
// }


// void quickSort(int arr[], int s, int e){
//     // base case
//     if(s>e)
//     return;

//     //partition 
//     int p=partition(arr, s,e);

//     //left part sorting
//     quickSort(arr, s, p-1);

//     //right part sorting
//     quickSort(arr, p+1, e );
// }


// int main(){
//     int arr[5]={2,1,5,3,6};
//     int n=5;
//     quickSort(arr, 0, n-1);
//     cout<<"sorted array:";
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
//sorted array:1 2 3 5 6 