// insert at tail

#include <iostream>
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

void insertAtTail(node* &tail, int d){
    node* temp= new node(d);
    tail->next=temp;
    tail=temp;
}
void printHead(node* &head){
    node* temp= head;
    
    while(temp!= NULL){
        cout<< temp->data <<" " ;
        temp= temp-> next;
    }
    cout<<endl;
}
int main() {
    // create new node
    node* first= new node(10);
    cout<<first->data<<endl;
    //cout<<first->next;
    
    node* head = first;
    node*tail= first;
    
    insertAtTail(tail, 12);
    printHead(head);
    
    insertAtTail(tail, 13);
    printHead(head);
    

    return 0;
}

// 10
// 10 12
// 10 12 13