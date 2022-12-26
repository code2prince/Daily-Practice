 

/*

 // sum 
  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include<iostream>
using namespace std;
int sum(int n){
    if(n<0){
        return 0;
    }
    return n+sum(n-1);
}
int main(){
    int n=5;
    cout<<"sum: "<<sum(n);     // sum: 15
    return 0;
}




>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
factorial


#include <iostream>
using namespace std;
int fact(int n){
    if(n==0)
    return 1;    // if u return 0 then overall fact will be 0 finally
       return n*fact(n-1);
}
int main() {
    int n=5;
    cout<<fact(n);
}
*/