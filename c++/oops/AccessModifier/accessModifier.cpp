// how to create and class

/*
class Hero{
    //properties
};
*/





// create an object of the class Hero

/*
Hero h1;
*/

/*

#include<iostream>
using namespace std;
// create a class
class hero{
    // >> By default Private member
        int health;
        char level;
};

int main(){
    // create a object of class hero

    hero h1;
    cout<<h1.health<<endl;   // Error >>>>>> because health is by default private member

}

*/

#include<iostream>
using namespace std;

// create a class
class hero{
    // properties
    public:
        int health;
        char level;
};

int main(){
    
    // create a object of class hero
    hero h1;
    //set data
    h1.health=70;

    cout<<"Health is:" <<h1.health<<endl;   // Health is:70

}

