#include<iostream>
using namespace std;
int main(){
    int n,r,temp,sum=0;
    cout<<"enter no:";
    cin>>n;
    temp=n;
    while(n>0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
    cout<<"armstrong";
    else
    cout<<"not armstrong";
    return 0;
}