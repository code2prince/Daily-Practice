// Union b/w two array

#include <iostream>
using namespace std;
void intersection(int arr1[], int arr2[], int m, int n){
    int i=0,j=0;
    while(i<m && j< n){
        if(arr1[i] < arr2 [j] ){
            cout<<arr1[i++]<< " ";
        }else if(arr2[j] < arr1[i]){
            cout<<arr2[j++]<<" ";
        }else{
            cout <<arr2[j++]<<" ";
            i++;
        }
    }
    while(i<m)
        cout<<arr1[i++];

    while(j<n)
       cout<< arr2[j++];
    
}

int main() {
     int arr1[5] = { 1, 2, 4, 5, 6 };
    int arr2[4] = { 2, 3, 5, 7 };
    
    int m=5;
    int n=4;
    
    intersection(arr1, arr2, m, n);

    return 0;
}

// 1 2 3 4 5 6 7




// class Solution{
//     public:
//     //arr1,arr2 : the arrays
//     // n, m: size of arrays
//     //Function to return a list containing the union of the two arrays. 
//     vector<int> findUnion(int arr1[], int arr2[], int n, int m)
//     {
//         //Your code here
//         //return vector with correct order of elements
//      set<int>s;
//      for(int i=0; i<n; i++){
//          s.insert(arr1[i]);
//      }
//      for(int i=0; i<m; i++){
//          s.insert(arr2[i]);
//      }
//      vector<int>v{s.begin(), s.end()};
//      return v;
//     }
// };