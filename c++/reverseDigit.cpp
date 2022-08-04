// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int rev=0;
//     cout<<"Enter no:";
//     cin>>n;
//     while(n>0){

//         rev=(rev*10) + n%10;
//         n=n/10;
//     }
//     cout<<"Reverse:"<<rev;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int m;
    int reverse=0;
    cout<<"Enter the no:";
    cin>>m;
    for(; m>0; m=m/10){
        reverse=(reverse*10) +m%10;
    }
    cout<<"reverse:"<<reverse;
    return 0;
}