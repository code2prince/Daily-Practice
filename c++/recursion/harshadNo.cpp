// Harshad No    

// >>>>>>> 12  --> 1+2=3  -->  12%3=0   >> than harshad no
// 81 --> 8+1=9  81%9=0  harshad

#include<iostream>
using namespace std;

int harshad(int n){
    int temp=n;
    int sum=0;
    while(temp>0){
        sum=sum+temp%10;
        temp=temp/10;
    }
    return n%sum==0;
}
int main(){
    int n;
    cout<<"Enter no: ";
    cin>>n;

    if(harshad( n)){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    return 0;
}

// Enter no: 81
// yes

// Enter no: 13
// no