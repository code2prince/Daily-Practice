// Parametrized Constructor    >>>>this keyword is uses

#include<iostream>
using namespace std;
class Hero{

    private:
    int health;

    public:
    char level;

        // constructor   
        Hero(){
        cout<<"Constructor called"<<endl;
        }

        // parametrized constructor
        Hero(int health){
            cout<<"this->"<< this <<endl;   // this->0x61fea4   >>> this represent current object so the same address of ram is printing here
            this->health=health;
        }

        Hero(int health, char level){
            this->level=level;
            this->health=health;
        }

        void print(){
            cout<<level<<endl;  // C
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
// parametrized static obj. created 
    Hero ram(10);
    cout<<"Address of ram: "<< &ram <<endl;  //  Address of ram: 0x61fea4

    // Dynamically object created
   // Hero *h2= new Hero(20);  // //Constructor called  >> *Constructor* is called when an object is created .....


    Hero shyam(20, 'C');
    shyam.print();

}