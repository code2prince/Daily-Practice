// Balanced array (gfg)
// arr[]={1,5,4,3}  >>> 1+5 =6  4+3=7   (7-6) >> 1 output  need for balanced
// arr[]={2,4,3,1,6,5}  >>> 2+4+3 =9  1+6+5=12   (12-9) >> 3 output  need for balanced

#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,4,3,1,6,5};
    int n=6;
    int left=0, right=0;
    for(int i=0; i<n; i++){
        if(i<n/2)
        left+=arr[i];
        else
        right+=arr[i];
    }
    cout<<"need to balanced: "<< abs (right-left);   //>> abs (absolute) is used becuase it may be left > right then value will be -ve so abs make it in +ve
    return 0;
}

//need to balanced: 3