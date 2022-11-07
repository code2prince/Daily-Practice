// basic struct

#include<bits/stdc++.h>
using namespace std;
struct student{
    int age;
    int roll;
    string name;
    int mobile;


};
int main(){
    student obj;
    obj.name="Prince";
    obj.age=21;
    obj.mobile=873091666;
    obj.roll=18;

    cout<<" name: " <<obj.name << " age: "<< obj.age<< " mobile: "<< obj.mobile<< " roll: "<<obj.roll<<endl;
    return 0;
}

//  name: Prince age: 21 mobile: 873091666 roll: 18