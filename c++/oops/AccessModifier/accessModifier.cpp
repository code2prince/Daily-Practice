// Access Modifier



// how to create and class

/*
class Hero{
    //properties
};
*/





// create an object of the class Hero

/*
>>>> Statically  object creation
Hero h1;
*/

/*
Dynamically object create
Hero *h= new Hero;
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

/*
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
*/

#include<iostream>
using namespace std;

// create a class
class hero{
    // properties
    public:
        int health;
    private:
        char level;


// it can be only and only accessable into scope >> By the help of getter and Setter 
    void print(){
        level='A';
        cout<<"Level is: "<<level;
    }
};

int main(){

    // create a object of class hero
    hero h1;

    //set data

    h1.health=70;
    // h1.level='c';  >> Error

    cout<<"Health is:" <<h1.health<<endl;   // Health is:70
    // cout<<"level is: "<<h1.level<<endl;    >>> Error due to private member function can't be access out side the class
}

