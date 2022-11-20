
// Find the number of subarrays having even sum

// Input:
// N = 6
// Arr[] = {1, 2, 2, 3, 4, 1}
// Output: 9
// Explanation: The array {1, 2, 2, 3, 4, 1} 
// has 9 such possible subarrays. These are-
//  {1, 2, 2, 3}          Sum = 8
//  {1, 2, 2, 3, 4}       Sum = 12
//  {2}                   Sum = 2 (At index 1)
//  {2, 2}                Sum = 4
//  {2, 2, 3, 4, 1}       Sum = 12
//  {2}                   Sum = 2 (At index 2)
//  {2, 3, 4, 1}          Sum = 10
//  {3, 4, 1}             Sum = 8
//  {4}                   Sum = 4

#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,2,3,4,1};
    int n=6;
    int even=0, odd=0,sum=0,ans=0;

    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(sum%2==0){
            ans+=even+1;
            even++;
        }else{
            ans+=odd;
            odd++;
        }
    }
    cout<<"Total possible subarrays: "<<ans;
    return 0;
}

//  Total possible subarrays: 9