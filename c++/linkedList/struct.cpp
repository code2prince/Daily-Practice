// basic struct

// #include<bits/stdc++.h>
// using namespace std;
// struct student{
//     int age;
//     int roll;
//     string name;
//     int mobile;


// };
// int main(){
//     student obj;
//     obj.name="Prince";
//     obj.age=21;
//     obj.mobile=873091666;
//     obj.roll=18;

//     cout<<" name: " <<obj.name << " age: "<< obj.age<< " mobile: "<< obj.mobile<< " roll: "<<obj.roll<<endl;
//     return 0;
// }

//  name: Prince age: 21 mobile: 873091666 roll: 18



#include<iostream>
using namespace std;
struct student{
    int age;
    int roll;
    string name;

    void detail(){
        cout<<"name: " <<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"roll: "<<roll<<endl;
    }
};
int main(){
    student obj;
    obj.name="Prince sharma";
    obj.age=21;
    obj.roll=18;

    obj.detail();

    student prem={22,19,"Prem"};
    prem.detail();


    return 0;
}

// name: Prince sharma
// age: 21
// roll: 18


// name: Prem
// age: 22
// roll: 19