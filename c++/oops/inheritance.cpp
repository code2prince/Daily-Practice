// inheritance example

#include<iostream>
using namespace std;

//Base(parent) class
class vehicle{
    public:
        string brand= "Mahendra";

        // void owner(){
        //     cout<<"Anand Mahendra"<<endl;
        // }
    
};

//Derived (child) class
class car: public vehicle{
    public:
        string model="Thar";

};

int main(){
    car obj;
    
    // obj.owner();
    
    cout<< obj.brand + "--" +obj.model;
    return 0;
}




//( Anand Mahendra ) if owner function call


// Mahendra--Thar