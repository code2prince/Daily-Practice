// Lcm of two given no

#include<iostream>
using namespace std;
int main(){
    int n1=12,n2=18,max;

     max=(n1>n2)?n1:n2;

    do{
        if(max % n1==0 && max % n2==0){
            cout<<"LCM="<<max;
            break;
        }
        else
        max++;
    }
    while(true);
    return 0;
}

// LCM=36