// find the missing number in a given integer array

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,6};
    int n=sizeof(arr)/sizeof(arr[0]);


    int temp=n+1;
    //Arthemetic progression (ap= (n*n+1)/2)
    int total=(temp *(temp+1))/2;


    for(int i=0; i<n; i++){
        total=total-arr[i];
    }
    cout<<"missing no into range is : " <<total;
}


// missing no into range is : 5










// explaination

// #include <iostream>
// using namespace std;
// int main() {
//     int arr[4]={3,4,2,5};
//     int n=4,sum=0,ap=0;
//     if(int m=n+1){
//         ap=(m*(m+1))/2;
//     }
//    
//     for(int i=0; i<n; i++){
//         sum=sum+arr[i];
//     }
//     
//     int missing=ap-sum;
//     cout<<missing;
    

//     return 0;
// }