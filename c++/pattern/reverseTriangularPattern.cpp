// reverse triangular pattern

// #include<iostream>
// using namespace std;
// int main(){
//     int row;
//     cout<<"Enter row:";
//     cin>>row;

//     for(int  i=row; i>=1; i-- ){
//         for(int j=1; j<=i; j++){
//             cout<<j;
//         }
//         cout<<"\n";

//     }
//     return 0;
// }


// Enter row:5
// 12345
// 1234
// 123
// 12
// 1




#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}



// Enter the value of n:6
// ******
// *****
// ****
// ***
// **
// *