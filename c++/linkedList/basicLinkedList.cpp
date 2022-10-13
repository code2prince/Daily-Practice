#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
int main(){

    node* first= new node(10);
    cout<<first->data<<endl;
    cout<<first->next;
    return 0;
}

// 10
// 0