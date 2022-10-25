// find frequency of a no

#include<iostream>
using namespace std;

int frequency(int n, int k){
    int c=0;
    while(n>0){
        if(n%10==k){
            c++;
        }
        n=n/10;
    }
    return c;
}

int main(){
    int n=12344345;
    int k=4;

    cout<<"frequency of "<< k <<" is :"<<frequency(n,k);

    return 0;
}

//frequency of 4 is :3



   //without recursion

// #include <iostream>
// using namespace std;
// int main() {
//     int n=1234444343;
//     int k=4,c=0;
//     while(n>0){
//         if(n%10==k){
//             c++;
//         }
//         n=n/10;
//     }
//     cout<<c;

//     return 0;
// }
