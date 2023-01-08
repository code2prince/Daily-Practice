// rectangular pattern
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no:";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
        cout<<" ";
        }
        for(int j=0; j<(2*i)+1; j++){
            cout<<"*";
        }
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

*/

/*

Enter a no:5
    *    
   ***   
  *****  
 ******* 
*********

*/



// reverse triangular pattern


#include <iostream>
using namespace std;
int main() {
    int n=5;
    for(int i=n; i>=0; i--){
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        for(int j=0; j<(2*i)-1; j++){
            cout<<"*";
        }
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}


/*

*********
 *******
  *****
   ***
    *
*/