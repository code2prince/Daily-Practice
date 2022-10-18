// insertion sort
#include <iostream>
using namespace std;
int main() {
    int arr[5]={3,5,3,2,1};
    int n=5;
    for(int i=1; i<n; i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j] > current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//  1 2 3 3 5
