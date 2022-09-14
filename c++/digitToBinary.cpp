// Digit to binary

#include <iostream>
using namespace std;

long long convert(int n){
    long long binary=0;
    int rem, i=1;
    while(n!=0){
        rem= n%2;
        n=n/2;
        binary=binary + rem*i;
        i=i*10;
    }
    return binary;
}



int main(){
    int n,binary;
    cout<<"Enter a no:";
    cin>>n;
    binary=convert(n);
    cout<<"binary="<<binary;
    return 0;
}