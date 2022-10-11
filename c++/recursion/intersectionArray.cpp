// intersection between two arrays

#include<iostream>
using namespace std;

void printIntersection(int arr1[], int arr2[], int m, int n){
    int i=0, j=0;
    while(i<m && j<n ){
        if(arr1[i] < arr2[j]){
            i++;
        }else if( arr2[j] < arr1[i]){
            j++;
        }else{        //else >>> arr1[i] == arr2[j]
            cout<<arr2[j]<<" ";
            i++;
            j++;
        }
    }
}

int main(){
    int arr1[5]={0,1,2,5,8};
    int arr2[4]={1,5,8,9};

    int m=5;
    int n=4;
    printIntersection(arr1, arr2, m, n);

    return 0;
}

// 1 5 8 