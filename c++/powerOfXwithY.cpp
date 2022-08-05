//write a programm to find x^y

#include<iostream>
using namespace std;
int main(){
    int x,y,i,product=1;
    cout<<"Enter the value of x:";
    cin>>x;
    cout<<"Enter the value of y:";
    cin>>y;
    for(i=1; i<=y; i++){
        product=product*x;
    }
    cout<<"product:"<<product<<endl;
    return 0;
}



//while loop

// #include<iostream>
// using namespace std;
// int main(){
//     int x,y,i,product=1;
//     cout<<"Enter the value of x:";
//     cin>>x;
//     cout<<"Enter the value of y:";
//     cin>>y;
//     i=1;
//     while(i<=y){
//         product=product*x;
//         i=i+1;
//     }
//     cout<<"product is:"<<product<<endl;
//     return 0;
// }