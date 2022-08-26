// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a no:";
//     cin>>n;
//     if(n%400==0){
//         cout<<"Leap year";
//     }
//     else if(n%100==0){
//         cout<<"Not Lear Year";
//     }
//     else if(n%4==0){
//         cout<<"Leap year";
//     }

//     return 0;
//}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no:";
    cin>>n;
    if(n%4==0 && n%100!=0 || n%400==0){
        cout<<"Leap year";
    }
    else{
     cout<<"not leap year";   
    }
    return 0;
}
// Enter a no:2013
// not leap year

// Enter a no:2012
// Leap year