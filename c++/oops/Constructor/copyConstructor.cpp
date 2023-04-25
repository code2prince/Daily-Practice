// Copy constructor
#include<iostream>
using namespace std;
class Hero{
    private:
    int health;

    public:
    char level;

    Hero(){
        cout<<"simple constructor called"<<endl;
    }

    Hero(int health, char level){
        this->level=level;
        this->health=health;
    }

    //copy constructor >> we can also create our own copy constructor
    Hero(Hero &temp){
        cout<<"copy constructor called...."<<endl;
        this->health=temp.health;   // temp.health using because temp is static operated so dot
        this->level=temp.level;
    }



    void print(){
        //cout<<"halth is: "<<this-> health<<endl;
        //or
        cout<<"health is: "<<health<<endl;
        cout<< "level is : "<< level <<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health=h;
    }

    void setLevel(char ch){
        level=ch;
    }



};
int main(){

    Hero Ram(70, 'A');
    Ram.print();



// copy constructor >>   calling 
    Hero Aman(Ram);
    Aman.print();

    /*explaination of >>> Hero Aman(Ram);   copy constructor
    Aman.health=Ram.health;
    Aman.level=Ram.level;
    */
return 0;
}

/*
health is: 70
level is : A

copy constructor called....

health is: 70
level is : A
*/