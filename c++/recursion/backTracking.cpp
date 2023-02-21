// Backtracking 1 to N;

// #include <iostream>
// using namespace std;
// void print(int i, int n){
//     if(i<1)
//     return;
//     print(i-1, n);
//     cout<<i<<endl;
// }
// int main() {
//     int n=5;
//     print(n,n);

//     return 0;
// }


// 2nd Approach

#include<iostream>
using namespace std;
void printTillN(int n){
    if(n>0){
        printTillN(n-1);
        cout<<n<<endl;
    }
}
int main(){
    int n=5;
    printTillN(n);
}
/*
1
2
3
4
5
*/