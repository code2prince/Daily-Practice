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