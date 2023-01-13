// Gcd/ hcf
/*
#include<iostream>
using namespace std;
int main(){
    int n1,n2,hcf;
    cout<<"enter n1:";
    cin>>n1;
    cout<<"enter n2:";
    cin>>n2;
    for(int i=1; i<=min(n1,n2); i++){    /// min(n1,n2)  >> because if n1 is greater n2 then no any sence to check more then n2 value so check upto min of n1,n2 
        if(n1%i==0 && n2%i==0)
         hcf=i;
    }
    cout<<"Gcd/hcf is:"<<hcf;
    return 0;
}

 enter n1:12
 enter n2:18
 Gcd/hcf is:6

 */

/*
enter n1:12
enter n2:9
Gcd/hcf is:3
*/
// Time Complexity= min(n1,n2)

//*********************************************





// for better time complexity 

// Euclidean Algorithm   >>gcd(a,b) = gcd(a%b,b) till 0,   if a is greater  
/* **********************
gcd(52,10) = gcd(52%10, 10) = gcd(2,10) now change gcd(10,2 )= gcd(10%2,2) = gcd(0,2) __> ans 2
*/
#include <iostream>
using namespace std;
int main() {
    int a=9, b=12;
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
    }
    if(a==0)
    cout<< b;
    else
    cout<< a;

    return 0;
}

// Time Complexity = log(min(a,b));  >> which is better than above one