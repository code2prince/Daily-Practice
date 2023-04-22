//Default Contructor

#include<iostream>
using namespace std;
class Hero{
    public:
        Hero(){
        cout<<"Constructor called"<<endl;
        }

    };
int main(){

    cout<<"Hii"<<endl;  //Hii

    // Statically object created
    Hero h1; //Constructor called   >> *Constructor* is called when an object is created
    cout<<"Hello"<<endl;  // Hello


    // Dynamically object created
    Hero *h2= new Hero;  // //Constructor called  >> *Constructor* is called when an object is created .....


}