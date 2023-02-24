
#include <iostream>
using namespace std;

void update(int a){
    a++;
}

void update1(int &a){
    a++;
}
int main() {
   int a=5;
   cout<<"before: "<<a<<endl;  //5
   
   // pass by value  or  call by value
   update(a);
   cout<<"after: "<<a <<endl; // 5  >> create a new copy so it will take new memory
   
   
   // pass by reference  or call by ref
   update1(a);
   cout<<"pass by ref after: "<<a;  //6   >> because same memory but another name

    return 0;
}