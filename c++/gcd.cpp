// Gcd/ hcf

#include<iostream>
using namespace std;
int main(){
    int n1,n2,hcf;
    cout<<"enter n1:";
    cin>>n1;
    cout<<"enter n2:";
    cin>>n2;
    for(int i=1; i<=n2; i++){
        if(n1%i==0 && n2%i==0)
         hcf=i;
    }
    cout<<"Gcd/hcf is:"<<hcf;
    return 0;
}

// enter n1:12
// enter n2:18
// Gcd/hcf is:6