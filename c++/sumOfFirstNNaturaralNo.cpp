// #include<iostream>
// using namespace std;
// int main(){
//     int N;
//     int sum=0;
//     cout<<"Enter the value of N:";
//     cin>>N;
//     for(int i=1; i<=N; i++){
//         sum+=i;
//     }
//     cout<<"Sum is:"<<sum;
//     return 0;
// }






// by using formula of Nth term sum


#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter the value of N:";
    cin>>N;

    cout<<N*(N+1)/2;
    return 0;
}