// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int sum=0;
//     cout<<"Enter no:";
//     cin>>n;
//     while(n>0){
//         sum=sum+n%10;
//         n=n/10;
//     }
//      cout<<"Sum is:"<<sum;
//      return 0;

// }

#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter the value of n:";
    cin>>n;
    for(; n>0; n=n/10)
    sum=sum+n%10;
    cout<<"sum: "<<sum;
    return 0;
}