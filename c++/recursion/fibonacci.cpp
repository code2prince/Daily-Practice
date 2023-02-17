//fibonacci no

#include<iostream>
using namespace std;
int fib(int n){
    if(n<=1)
        return n;
    return fib(n-1) + fib(n-2);  
    //or
    // int last=fib(n-1);
    // int secondLast=fib(n-2);
    // return last+secondLast;
}
int main(){
    int n=9;
   // cout<<"fibonacci no:"<<fib(n);  //fibonacci no:34

   // print series
   int i=0;
   while(i<=n){
    cout<<fib(i)<<" ";
    i++;
   }
    return 0;
}

// 0 1 1 2 3 5 8 13 21 34 




