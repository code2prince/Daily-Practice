// Print name n times;


// #include <iostream>
// using namespace std;
//  int count =0;
// void print(){
   
//     if(count==5)
//     return ;
//     cout<<"Prince"<<endl;
//     count++;
//     print();
// }
// int main() {
//     print();

//     return 0;
// }

#include<iostream>
using namespace std;
void print(int i, int n){
    if(i>n){
        return;
    }
    cout<<"Prince"<<endl;
    print(i+1,n);
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int i=1;
    print(i,n);
}
/*
Enter n: 5
Prince
Prince
Prince
Prince
Prince
*/
