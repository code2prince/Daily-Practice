// getter setter

#include<iostream>
using namespace std;
class Hero{
    private:
    int health;


    public:
    char level;

    void print(){
        cout<<level<<endl;
    }

   

    //getter   >> used for fetch the data
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    //setter   >> used to set data conditional set into data Eg. password setting condition
    void setHealth(int h){
        health=h;
    }

    void setLevel(char ch){
        level=ch;
    }
};
int main(){
    // Static object creation
    Hero h1;   // >> when we create an object then **Contructor** called..

     //////static

    cout<<"health is: "<<h1.getHealth()<<endl;  //health is: 6422376 >>> garbage value
    // setter >> set health
    h1.setHealth(80);
    //h1.level='A';
    h1.setLevel('A');

    cout<<"health is: "<<h1.getHealth()<<endl;  // health is: 80
    cout<<"level is: "<<h1.getLevel()<<endl; // level is: A
    ////////////////////////////////////////////////////////////////////////////////////////////////////////




    // Dynamically object creation  >> data store in Heap Memory
    Hero *h2= new Hero;

    h2->setHealth(20);
    
    //h2->level='B';
    // or
    h2->setLevel('B');


    cout<<"health is..: "<<(*h2).getHealth()<<endl;  // health is..: 20
    // or 
    cout<<"health is .......: "<< h2->getHealth()<<endl;  //health is .......: 20

    cout<<"level is ..: "<<(*h2).level<<endl;  // level is ..: B
    //or 
    cout<<"level is...:"<<h2->level<<endl;    // level is ...: B

////////////////////////////////////////////////////////////////////////////////////////////////////////////

   

}