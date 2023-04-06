// Pascal Triangle

/*
               1
            1     1
          1   2    1
        1    3    3    1
      1   4    6     4    1
    1   5    10   10    5   1
  1   6    15   20    15   6   1

  */

 // Q.1   Print the element at position row 5 and column 3  >>>which is 6



 /* 
 Explaination
 ******************************************** 
 nCr==  n! /r! * (n-r)! 
 >>>>>>>>  formula for that question is (n-1)C(r-1); will found the element of that position
  here
   5C3== (5-1)!/ 3! * (5-3)!
   (4*3)/(2*1) == 6 ans
   ***************************************
 */

#include<iostream>
using namespace std;
int main(){
    int n=5;
    int r=3;
    int ans=1;
    for(int i=0; i<r-1; i++){
        ans=ans*(n-1-i);
        ans=ans/(i+1);
    }
    cout<<"element is: "<<ans;
}
// element is: 6 
