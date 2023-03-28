#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack <int> s;
    // push
    s.push(2);
    s.push(3);
    s.push(33);
    s.push(45);
    
    //pop
    // s.pop();
    // cout<<"top element:"<<s.top()<<endl;

    // if(s.empty()){
    //     cout<<"stack is empty"<<endl;
    // }
    // else
    //     cout<<"size of stack:"<<s.size();       // size of stack:4

    // return 0;

    while(!s.empty()){
       cout<< s.top()<<" ";  // 45 33 3 2 
       s.pop();
    }
}