#include<iostream>
using namespace std;
int main(){
    int n;
    int rev=0;
    cout<<"Enter no:";
    cin>>n;
    while(n>0){

        rev=(rev*10) + n%10;
        n=n/10;
    }
    cout<<"Reverse:"<<rev;
    return 0;
}