
// check prime or not

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


// #include<iostream>
// using namespace std;
// int main(){
//     int n,i;
//     cout<<"enter value:";
//     cin>>n;
//     for( i=2; i<n/2; i++){
//         if(n%i==0){
//             cout<<"not prime";
//             break;
//         }
//     }
//     if(i==n/2)
//     cout<<"prime";
//     return 0;
// }



// prime no b/w given two range

#include<iostream>
using namespace std;
bool isPrime(int n){
    int count=0;

    if(n<2)
        return false;
    
    for(int i=2; i<n; i++) {
        if(n%i==0)
        return false;
    }
    return true;

}
int main(){
    int low, high;
    // low=1, high=100;
    cout<<"Low:";
    cin>>low;
    cout<<"high:";
    cin>>high;
    for(int i=low; i<=high; i++){
        if(isPrime(i))
        cout<<i<<" ";
    }
    return 0;
}
// Low:1
//high:100
// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 

