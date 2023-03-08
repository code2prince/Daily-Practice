// Remove Duplicates from Sorted Array

/*





Example 1:

Input: nums = [1,1,2]
Output: 2, 
nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).


Example 2:

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, 
nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/



// 2pointer approach
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,2,2,4,5,6};
    int n=7;

    int i=0;
    for(int j=1; j<n; j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    cout<<"without duplicate size: "<<i+1<<endl;    //without duplicate size: 5

    
    // int size=i+1;
    // for(int i=0; i<size; i++){
    //     cout<<arr[i]<<" ";  //1 2 4 5 6
    // }
}