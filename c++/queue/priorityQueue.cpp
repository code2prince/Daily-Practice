// priority queue

#include <iostream>
#include<queue>
using namespace std;
int main() {
    priority_queue<int>q;
    q.push(4);
    q.push(2);
    q.push(10);
    q.push(3);
    cout<<"size of queue: "<<q.size()<<endl;  //  size of queue: 4
    
    while(!q.empty()){
        cout<<q.top()<<endl;
        q.pop();
    }

    return 0;
}

/* 
>> priority queue works on maxHeap in C++ so maximum element will remove first
output
10
4
3
2
*/