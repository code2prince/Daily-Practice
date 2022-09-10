// linear search using Recursion

#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int k){

    //Base case
    if(size==0)
    return false;

    if(arr[0]==k){
        return true;
    }
    else{
        bool remainingPart= linearSearch(arr+1, size-1, k);
        return remainingPart;
    }
}


int main(){
int arr[5]={2,3,5,1,4};
int size=5;
int key=4;

bool ans = linearSearch( arr, size, key);

if(ans){
    cout<<"Present";
}
else{
    cout<<"Not Present";
}

return 0;
}
// Present