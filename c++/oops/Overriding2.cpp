//--------Mathod or Function Overriding----------------

#include<bits/stdc++.h>
using namespace std;
class Parent{
    public:
    void display(){
        cout<<"Parent or Base Display method"<<endl;
    }
};

class Child:public Parent{
    public:
    void display(){   //overriding display() 
        cout<<"Child or Derived Method"<<endl;
    }
};
int main(){
    Child ChildObj;
    ChildObj.display();  //Child or Derived Method
   

    ChildObj.Parent::display();  //by using scope resolution operator :: we can access parent class also but it shold be only public--> Parent or Base Display method
    return 0;
}