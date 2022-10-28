// find max and min of unsorted array

#include<iostream>
using namespace std;
int main(){
    int arr[]={4,6,2,1,8,7,5,8,9,12,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int max=INT_MIN;
    int min=INT_MAX;

    for(int i=0; i<n; i++){
        if(arr[i]>max)
        max=arr[i];

        if(arr[i]<min)
        min=arr[i];
    }

    cout<<"Maximum element of unsorted array is : "<<max<<endl;
    cout<< "Min element is : "<<min;
    return 0;
}

// Maximum element of unsorted array is : 12
// Min element is : 1