// function / method overridding  is a feature that allow you to redefine the parent class method in the child class based on its requirement.

#include<iostream>
using namespace std;

//parent class
class Animal{
    public:
    void speak(){
        cout<<"Speaking";
    }
};
// child class
class Dog{
    public:
    void speak(){
        cout<<"Barking";
    }
};
/*
int main(){
    Dog obj;
    obj.speak();
    return 0;
}

// Barking
*/

int main(){
    Animal obj;
    obj.speak();
}

// Speaking