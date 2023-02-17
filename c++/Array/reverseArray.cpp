// reverse an array

// #include <iostream>
// using namespace std;
// int main() {
//     int arr[]={1,2,3,4,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//    for(int i=0; i<n/2; i++){
//        int temp=arr[i];
//        arr[i]=arr[n-i-1];
//        arr[n-i-1]=temp;
//    }
//    for(int i=0; i<n ;i++){
//        cout <<arr[i]<< " ";
//    }
//     return 0;
// }

//6 4 3 2 1 




#include<bits/stdc++.h>
using namespace std;
void rev(int arr[],int s, int e){
    while(s<e){
        //swap(arr[s],arr[e]);
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6};
        int n=6;
        rev(arr,0,n-1);
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
}






// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=n-1; i>=0; i--){
//         cout<<arr[i]<<" ";
//     }
// }
