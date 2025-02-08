#include<iostream>
using namespace std;
class Animal{
    public:
    string breed;
    string color;
    string eyesColor;
    Animal(string b, string c){
        breed=b,
        color=c;
    }

    Animal(string a, string b, string c){
        breed=b,
        color=c,
        eyesColor=a;
    }
};
int main(){
    Animal Dog("Lebra", "Golden");
    Animal Cat("blue","cat breed xyz", "white");
    cout<<"---------------About Dog--------------"<<endl;
    cout<<Dog.breed<<endl;
    cout<<Dog.color;
    cout<<"\n--------------About Cat----------------------------"<<endl;
    cout<<Cat.breed<<endl;
    cout<<Cat.color<<endl;
    cout<<Cat.eyesColor;


    return 0;
    
}



/*

---------------About Dog--------------
Lebra
Golden
--------------About Cat----------------------------
cat breed xyz
white
blue


*/