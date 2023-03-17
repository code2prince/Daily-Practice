// reverse linkedlist


// class Solution{
//     public:
//         ListNode* reverseList(ListNode* head){
//             ListNode* newHead = NULL;
//             while(head!= NULL){
//                 ListNode* next = head->next;
//                 head->next = newHead;
//                 newHead = head;
//                 head = next;
//             }
//             return newHead;
//         }
// }






// class Solution
// {
//     public:
//     //Function to reverse a linked list.
//     struct Node* reverseList(struct Node *head)
//     {
//         Node* new_head=NULL;
//         while(head!= NULL){
//             Node* temp=head;
//             head=head->next;
//             temp->next= new_head;
//             new_head=temp;
            
//         }
//         return new_head;
        
//     }
    
// };
   

    //2nd approach 3 pointer 
     /* 
       Node * prev=NULL;
        Node* forward=NULL;
        Node* curr=head;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
        */


       // Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct node{
    int data;
    node* next;
};

void rev(node * head){
    node* curr=head;
    node* fwd=NULL;
    node* prev=NULL;
    while(curr!=NULL){
        fwd=curr->next;
        curr->next=prev;
        prev=curr;
        curr=fwd;
    }
    while(prev!=NULL){
     cout<<prev->data<<" ";
    prev=prev->next;
    }
}

void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main() {
    node* head=new node();
    node* sec=new node();
    node* third=new node();
    
    head->data=1;
    head->next=sec;
    
    sec->data=4;
    sec->next=third;
    
    third->data=5;
    third->next=NULL;
    cout<<"Before revese:";
    print(head);
    cout<<endl;
  
  cout<<"After reverse: ";
    rev(head);
    cout<<endl;

    return 0;
}
/*
Before revese:1 4 5 
After reverse: 5 4 1 
*/