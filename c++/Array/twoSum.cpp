// two sum present or not 

#include <iostream>
using namespace std;
int twoSum(int arr[], int n, int target){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] + arr[j] == target)
            return true;
        }
    }
    return false;
}
int main() {
    int arr[5]={5,4,3,6,1};
    int n=5;
    int target=10;
    
    cout<<"sum of "<< target<<" :";
   if(twoSum(arr, n, target)){
       cout<<"present";
   }else{
       cout<<"not";
   }

    return 0;
}

// sum of 10 :present    >> 4+6=10






//>>>>> total no of pairs of two sum 

// #include <bits/stdc++.h>
// using namespace std;
// int sum(int arr[], int n, int t){
//     int count;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i]+arr[j]==t)
//             count++;
//         }
//     }
//     return count;
// }
// int main() {
//     int arr[6]={1,3,4,2,5,9};
//     int n=6;
//     int t=7;
    
   
//     cout<<"total pairs: "<< sum(arr,n,t);

//     return 0;
// }

// total pairs: 2      >> 4+2  & 1+5