#include<iostream>
using namespace std;
bool isSorted(int arr[], int size){
    // Base case
    if(size==0 || size==1)
    return true;

    if(arr[0]>arr[1])
        return false;
    else{
        bool remainingPart=isSorted(arr+1, size-1);
        return remainingPart;
    }

}


int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    bool ans= isSorted(arr,size);

    if(ans==true)
    cout<<"Array is sorted";

    else
    cout<<"not sorted";

    return 0;
}

// Array is sorted