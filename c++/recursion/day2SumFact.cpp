// Parameterized recursion 

// #include <iostream>
// using namespace std;
// void print(int n, int sum){
//     if(n<1){
//         cout<<sum;   //15
//         return;
//     }
//     print(n-1, sum+n);
// }
// int main() {
//     int n=5;
//     int sum=0;
//     print(n,sum); 

//     return 0;
// }




// >>>>>>functional recursion

// #include<iostream>
// using namespace std;
// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     return n+sum(n-1);
// }
// int main(){
//     int n=5;
//     cout<<sum(n);  // 15
// }




//>>>> factorial   >> functional recursion

#include <iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;  // if return 0 means overall will be 0
    }
    return n*fact(n-1);
}
int main(){
    int n=5;
    cout<<fact(n);  //120
}

