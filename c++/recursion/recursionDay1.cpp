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


//**********
// #include<iostream>
// using namespace std;
// void print(int i, int n){
//     if(i>n){
//         return;
//     }
//     cout<<"Prince"<<endl;
//     print(i+1,n);
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int i=1;
//     print(i,n);
// }
/*
Enter n: 5
Prince
Prince
Prince
Prince
Prince
*/



//print 1 to N linearly

/*
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


#include<iostream>
using namespace std;
void print(int i, int n){
// Base case
    if(i>n)
     return;

    cout<<i<<endl;
    print(i+1,n);
};
int main(){
    int n;
    cout<<"ENter n: ";
    cin>>n;
    int i=1;
    print(i,n);
}


ENter n: 5
1
2
3
4
5



// #include <iostream>
// using namespace std;
// int count=1;
// int  counter(int n){
    
//     if(count==n+1){
//         return n;
//     }
//     cout<<count<<endl;
//     count++;
//     counter(n);
// }
// int main() {

//     int n;
//     cout<<"ENter: ";
//     cin>>n;
// counter(n);
//     return 0;
// }


*/



// reverse order n to 1

#include<iostream>
using namespace std;
void print( int i,int n){
// Base case
    if(i<1){
        return;
    }
    cout<<i<<endl;
    print(i-1,n);
   
    
};
int main(){
    int n;
    cout<<"ENter n: ";
    cin>>n;
    print(n,n);
    return 0;
}

// ENter n: 5 
// 5
// 4
// 3
// 2
// 1