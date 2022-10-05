// linear search

#include<iostream>
using namespace std;
bool linearSearch(int arr[], int size, int find){
    //base case
    if(size==0){
        return false;
    }
    if(arr[0]==find){
        return true;
    }else{
        bool remainingPart = linearSearch(arr+1, size-1, find);
            return remainingPart;
    }
}

int main(){
    int arr[]={1,4,3,5,8};
    int size= sizeof(arr)/sizeof(arr[0]);
    int find;
    cout<<"Enter an element:";
    cin>>find;
    bool ans= linearSearch(arr, size, find);

    if(ans){
        cout<<"Present";
    }
    else{
        cout<<"not";
    }
    return 0;
}

// Enter an element:5
// Present