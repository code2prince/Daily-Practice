#include<iostream>
using namespace std;
int main(){
    int n;
    int prod=1;
    cout<<"Enter the no.:";
    cin>>n;
    while(n>0){
        prod=prod * (n%10);
        n=n/10;
    }
    cout<<"product of no is:"<<prod;
    return 0;

}

///for loop 


// #include<iostream>
// using namespace std;
// int main(){
//     int i, pro=1;
//     cout<<"enter no.";
//     cin>>i;
//     for(; i>0 ; i=i/10)
//         pro=pro*i%10;
//         cout<<"product:"<<pro;
//         return 0;

// }
