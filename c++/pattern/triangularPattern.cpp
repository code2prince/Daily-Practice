// triangular pattern

// #include<iostream>
// using namespace std;
// int main(){
//     int row;
//     cout<<"Enter no of rows:";
//     cin>>row;

//     for(int i=1; i<=row; ++i){
//         for(int j=1; j<=i; ++j){
//             cout<<"*";
//         }
//     cout<<"\n";
//     }
//     return 0;
// }


// Enter no of rows:5
// *
// **
// ***
// ****
// *****




#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter row:";
    cin>>row;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}


// Enter row:5
// 1
// 12
// 123
// 1234
// 12345