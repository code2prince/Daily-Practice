//Missing number in shuffled array

 
// Example 1:
// Input : 
// A[] = {4, 8, 1, 3, 7}
// B[] = {7, 4, 3, 1}
// Output : 8
// Explanation:
// 8 is the only element missing from B.

#include<iostream>
using namespace std;
int main(){
    int arr1[5]={4,8,1,3,7};
    int n=5;
    int arr2[4]={7,4,3,1};
    //int n2=n-1;

    int count=0;
    for(int i=0; i<n; i++){
        count=count+arr1[i];
    }

    int count1=0;
    for(int i=0; i<n-1; i++){
        count1=count1+arr2[i];
    }
    cout<<"Missing no : "<<count-count1;
    return 0;
}

// Missing no : 8