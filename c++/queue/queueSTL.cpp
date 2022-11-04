// queue stl
#include <iostream>
#include<queue>
using namespace std;
int main() {
   
   // create a queue
   queue<int> q;
   
   q.push(10);
   q.push(20);
   q.push(12);
   
     cout<< " front of queue: "<<q.front()<<endl; //  front of queue: 10 
   
   cout<<"size of q is : "<<q.size()<<endl;       // size of q is : 3
   
    q.pop();
    cout<<"size of q is : "<<q.size()<<endl;     //size of q is : 2


    if(q.empty()){
        cout<<"q is empty  "<<endl;
    }else{
        cout<<" q is not empty "<<endl;    // q is not empty
    }
    
    cout<< " front of queue: "<<q.front()<<endl; //  front of queue: 20
    return 0;
}