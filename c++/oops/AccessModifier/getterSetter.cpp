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

   

    //getter
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    //setter
    void setHealth(int h){
        health=h;
    }

    void setLevel(char ch){
        level=ch;
    }
};
int main(){
    Hero h1;


    cout<<"health is: "<<h1.getHealth()<<endl;  //health is: 6422376 >>> garbage value
    // setter >> set health
    h1.setHealth(80);
    h1.level='A';

    cout<<"health is: "<<h1.getHealth()<<endl;  // health is: 80
    cout<<"level is: "<<h1.getLevel()<<endl; // level is: A

}