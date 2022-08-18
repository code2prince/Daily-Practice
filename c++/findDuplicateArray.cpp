#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,2,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++){
        arr[arr[i]%n] = arr[arr[i]%n] + n;
    }
    cout<<"Repeated Element: ";
    for(int i=0; i<n; i++){
        if(arr[i]>= n*2){
            cout<< i <<"  ";
        }
    }
    return 0;
}
// Repeated Element: 2  3