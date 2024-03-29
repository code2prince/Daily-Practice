//  Sum of Middle Elements of two sorted arrays
/*
Given 2 sorted arrays Ar1 and Ar2 of size N each. Merge the given arrays and find the sum of the two middle elements of the merged array.

 

Example 1:

Input:
N = 5
Ar1[] = {1, 2, 4, 6, 10}
Ar2[] = {4, 5, 6, 9, 12}
Output: 11
Explanation: The merged array looks like
{1,2,4,4,5,6,6,9,10,12}. Sum of middle
elements is 11 (5 + 6).
 




Example 2:

Input:
N = 5
Ar1[] = {1, 12, 15, 26, 38}
Ar2[] = {2, 13, 17, 30, 45}
Output: 32
Explanation: The merged array looks like
{1, 2, 12, 13, 15, 17, 26, 30, 38, 45} 
sum of middle elements is 32 (15 + 17).

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr1[]={1, 2, 4, 6, 10};   
    int arr2[]={4, 5, 6, 9, 12};
    int n=5;
    vector<int>v;
    for(int i=0; i<n; i++){
        v.push_back(arr1[i]);
        v.push_back(arr2[i]);
    }
    sort(v.begin(), v.end());
    int sum=0;
   // sum=v[n-1]+v[n];
   //or

   int newSize=v.size();
   int mid=newSize/2;
   sum=v[mid]+v[mid-1];
    cout<<"mid sum:" <<sum;

}

// mid sum:11

// or 

/*

#include <bits/stdc++.h>
using namespace std;
int merge(int arr1[], int arr2[], int n1, int n2, int arr[], int n){
    int i=0, j=0, k=0;
    
    while(i<n1){
        arr[k++]=arr1[i++];
    }
    while(j<n2){
        arr[k++]=arr2[j++];
    }
   sort(arr, arr+n);
   int mid=n/2;
   for(int i=0; i<n; i++){
       cout<<"mid: "<<arr[mid]+arr[mid+1]<<endl;
       break;
       
   }
}
int main() {
    int arr1[]={4,5,3,1};
    int arr2[]={8,9,8,6,9};
    int n1=4;
    int n2=5;
    
    int n=n1+n2;
    int arr[n];
    merge(arr1, arr2, n1, n2, arr, n);
    return 0;
}

*/