// -----------Reverse no---------------

/*  
-----------// Method 1---------------
#include<iostream>
using namespace std;
int main(){
    int n=123;
    int rev=0;
    while(n>0){
        int rem=n%10;
        rev= rev*10 + rem;
        n=n/10;
    }
    cout<<"Reverse:"<<rev;    //Reverse:321
}
*/

//--------- Method 2 ---------Recursion-------------
#include<iostream>
using namespace std;
int getReverse(int n, int rev){
    if(n==0){
        return rev;
    }
    int rem=n%10;
    rev= rev*10 + rem;
    n=n/10;
    return getReverse(n,rev);

}
int main(){
    int n=1234;
    int rev=0;
    cout<<"Reverse: "<<getReverse(n, rev);  //Reverse: 4321
}

