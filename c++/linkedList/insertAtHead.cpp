// insert at head

#include<iostream>
using namespace std;

class node{
    public:
              //insert AT Head
    int data;
    node* next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtHead(node* &head, int d){
    //new node create
    node* temp= new node(d);
    temp-> next = head;
    head=temp;
}

void printHead(node* &head){
    node* temp= head;

    while(temp!= NULL){
        cout<< temp-> data<< " ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){

    node* first= new node(10);
    cout<<first->data<<endl;
    //cout<<first->next;

    node* head = first;

    insertAtHead(head,12);
    printHead(head);

    insertAtHead(head,14);
    printHead(head);

    return 0;
}

// 10
// 12 10
// 14 12 10