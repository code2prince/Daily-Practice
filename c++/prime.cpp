


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     int count=0;
//     cout<<"enter no:";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         if(n%i==0)
//             count++;
        
//     }
//     if(count==2)
//     cout<<"prime";
//     else
//     cout<<"composite";
//     return 0;

// }


#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter value:";
    cin>>n;
    for( i=2; i<n/2; i++){
        if(n%i==0){
            cout<<"not prime";
            break;
        }
    }
    if(i==n/2)
    cout<<"prime";
    return 0;
}