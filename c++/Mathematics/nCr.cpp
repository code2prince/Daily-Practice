 // find nCr ==10C3


#include <iostream>
using namespace std;
int main() {
    // find nCr ==10C3
    int n=10;
    int r=3;
    int result=1;
    for(int i=0; i<r; i++){
        result=result*(n-i);
        result=result/(i+1);
    }
    cout<<"ans: " <<result; // ans: 120
    return 0;
}