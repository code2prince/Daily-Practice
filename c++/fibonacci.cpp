//fibonacci series

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a value of n:";
//     cin>>n;

//     int a=0;
//     int b=1;
//     cout<<a <<" ";
//     cout<<b<<" ";
//     for (int i=1; i<n; i++){            ..........     ///or for(int i=2; i<=n; i++)  --->>because 2 value already assigning...0 and 1
//         int fibo=a+b;
//         cout<<fibo<<" ";
//         a=b;
//         b=fibo;

//     }
// }


// Enter a value of n:10
// 0 1 1 2 3 5 8 13 21 34 55 


// fibonacci no

#include<iostream>
using namespace std;
int main(){
    int n,fib;
    cout<<"enter no:";
    cin>>n;

    int a=0,b=1;
    for(int i=2; i<=n; i++){
         fib=a+b;
       
        a=b;
        b=fib;
    }
     cout<<fib;
    return 0;
}


// enter no:10
// 55