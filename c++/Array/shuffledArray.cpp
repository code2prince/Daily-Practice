/*
Write a function shuffle(arr)that takes input an array of numbers and returns an array by ordering the 
numbers in following fashion:
a1 <= a2 >= a3 <= a4 >= ....
Please note that there are multiple outputs that are possible for a given array. Your function can return 
one possible output. 

Example: If input is [2, 1, 5, 3, 11, 7], one possible output could be [2, 7, 3, 11, 1, 5]
*/

#include <bits/stdc++.h>
using namespace std;
void shuffleFunction(int arr[], int n){
    sort(arr,arr+n);
    for(int i=1; i<n-1; i=i+2){
        swap(arr[i],arr[i+1]);
    }
}
int main() {
    int arr[]={2,1,5,3,11,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    shuffleFunction(arr,n);
    cout<<"shuffled array will be : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// shuffled array will be : 1 3 2 7 5 11 