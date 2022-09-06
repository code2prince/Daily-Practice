// Exception   (try & catch)

#include<iostream>
using namespace std;
int main(){
    try{
    int age;
    cout<<"Enter your Age:";
    cin>>age;

    if(age>=18)
    cout<<"Access allow--- You can vote";
    
    else
        throw (age);
    }

    catch(int myAge){
        cout<<"Access Denied ---- You are under age to vote" <<endl;
        cout<<"your age:"<<myAge;
    }
    return 0;
}

// Enter your Age:12
// Access Denied ---- You are under age to vote
// your age:12


// Enter your Age:19
// Access allow--- You can vote