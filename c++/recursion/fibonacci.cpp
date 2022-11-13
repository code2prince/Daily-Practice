//fibonacci no

#include<iostream>
using namespace std;
int fib(int n){
    if(n<=1)
        return n;
    return fib(n-1) + fib(n-2);  
}
int main(){
    int n=9;
    cout<<"fibonacci no:"<<fib(n);
    return 0;
}


//fibonacci no:34