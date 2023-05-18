//Automorphic No.


/*
 A number is called an Automorphic number if and only if its square ends in the same digits as the number itself.
Examples : 

Input  : N = 76 
Output : Automorphic
Explanation: As 76*76 = 5776

Input  : N = 25
Output : Automorphic
As 25*25 = 625

Input : N = 7
Output : Not Automorphic
As 7*7 = 49

*/

#include <iostream>
using namespace std;
bool automorphicNo(int n){
    int square=n*n;
    while(n>0){
        if(n%10!=square%10){
            return false;
        }
        n=n/10;
        square=square/10;
    }
    return true;
}
int main() {
    int n;
    cout<<"n: ";
    cin>>n;
    
    if(automorphicNo(n)){
        cout<<"Automorpic No";
    }else{
        cout<<"not";
    }
    return 0;
}

/*
n: 25
Automorpic No

n: 76
Automorpic No

n: 7
not
*/