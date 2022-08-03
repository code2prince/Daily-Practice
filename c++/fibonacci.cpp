#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a value of n:";
    cin>>n;

    int a=0;
    int b=1;
    cout<<a <<endl;
    cout<<b<<endl;
    for (int i=0; i<=n; i++){
        int fibo=a+b;
        cout<<fibo<<endl;
        a=b;
        b=fibo;

    }
}