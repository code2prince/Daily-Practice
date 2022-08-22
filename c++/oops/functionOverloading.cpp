// function/ Method overloading :- we can't declear two or more function on same name
//Note:-  but by passing an argument into a same function  then function overloading will not occures


#include<iostream>
using namespace std;

    class A{
        public:
        void sayHello(){
            cout<<"Hello"<<endl;
        }
        void sayHello(char name){
            cout<<"Hello Prince ";
        }
    };


    int main(){
        A obj;
        obj.sayHello();
        return 0;
    }
// Hello