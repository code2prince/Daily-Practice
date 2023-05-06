// diamond pattern

/*
//////////////////
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
/////////////////

*/


#include<iostream>
using namespace std;
int main(){
    int n=5;

    int row,col,space;

    //1st half above part

    for(row=1; row<=n; row++){
        for(space=1; space<=n-row; space++){
            cout<<" ";
        }
        for(col=1; col<=2*row-1; col++){
            cout<<"*";
        }
        cout<<endl;
    }

    //below half

    for(row=n-1; row>=1; row--){
        for(space=1; space<=n-row; space++){
            cout<<" ";
        }
        for(col=1; col<=2*row-1; col++){
            cout<<"*";
        }
        cout<<endl;
    }
}


/*

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
    
*/