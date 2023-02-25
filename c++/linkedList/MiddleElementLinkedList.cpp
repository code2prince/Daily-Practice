// find the middle element of linked list

// class solution{
//     public:
//     listNode* middleNode(listNode* head){
//         listNode slow=head, fast=head;
//         while(fast!= NULL && fast->next!=NULL){
//             slow=slow->next;           //(or slow=slow.next;)
            
//             fast=fast->next->next;     ///( fast=fast.next.next;)
//         }
//         return slow;
//     }
// };




 

 
// class Solution{
//     public:
//     int getMiddle(Node *head){
//         if(head==NULL)
//         return -1;
    
        
//         Node* slow=head;
//         Node* fast=head;
        
//         while(fast!=NULL && fast->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         return slow->data;
//     }
    

// };


#include <iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
void print(node* n){
    while(n!=NULL){
        cout<<n->data<<endl;
        n=n->next;
    }
}


// find mid of linked list 
int mid(node * head){
    node* slow=head;
    node* fast=head;
    
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        
    }
    cout<<"Mid of linked list : "<< slow->data;
    
}
int main() {
    node *head=new node();
    node *second=new node();
    node* third=new node();
    node*forth=new node();
    node* fifth=new node();
    
    
   head->data=5;
   head->next=second ;
   
   second->data=6;
   second->next=third;
   
   third->data=9;
   third->next=forth;
   
   forth->data=2;
   forth->next=fifth;
   
   fifth->data=10;
   fifth->next=NULL;
   
   print(head);
   mid(head);

    return 0;
}

/*
5
6
9
2
10
Mid of linked list : 9
*/