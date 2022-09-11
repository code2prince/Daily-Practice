#include<iostream>
using namespace std;
void print(int arr[], int start, int end){
    for(int i=start; i<=end; i++){
        cout<<arr[i]<<" ";
      }  cout<<endl;
    
}

bool binarySearch(int arr[], int start, int end, int k){

    print(arr,start,end);

    // element not found
    if(start>end)
        return false;
    int mid= start + (end-start)/2;

    //element found
    if(arr[mid]==k)
        return true;
    
    if(arr[mid]<k){
        return binarySearch(arr, mid-1, end, k);
    }
    else{
        return binarySearch(arr, start, mid-1, k);
    }



}

int main(){
    // for binary search array must be sorted
    int arr[5]={2,3,4,6,7};
    int size=5;
    int key=6;

    cout<<"Present or not"<<binarySearch(arr, 0,5,key)<<endl;

return 0;

}


// Present or not2 3 4 6 7 6 
// 3 4 6 7 6
// 1