// Remove duplicate element from sorted linked list

/*
Example 1:

Input:
LinkedList: 2->2->4->5
Output: 2 4 5
Explanation: In the given linked list 
2 ->2 -> 4-> 5, only 2 occurs more 
than 1 time.



Example 2:

Input:
LinkedList: 2->2->2->2->2
Output: 2
Explanation: In the given linked list 
2 ->2 ->2 ->2 ->2, 2 is the only element
and is repeated 5 times.
*/



/// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

/*
Node* removeDuplicates(Node* head){
    Node* curr=head;
    while(curr!=NULL, curr->next!=NULL){
        if(curr->data== curr->next->data){
            curr->next=curr->next->next;
        }else{
            curr=curr->next;
        }
    }
    reutrn head;
}
*/

#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};


void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
// duplicate removal 
void revDuplicate(node* head){
    node* curr=head;
    while(curr!=NULL && curr->next!=NULL){
        if(curr->data== curr->next->data){
            curr->next=curr->next->next;
        }else{
            curr=curr->next;
        }
    }
    cout<<"after Duplicate remove:";
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }

}
int main(){
    node* head =new node();
    node* sec=new node();
    node* third=new node();
    node* forth=new node();
    node* fifth=new node();

    head->data=1;
    head->next=sec;

    sec->data=2;
    sec->next=third;

    third->data=5;
    third->next=forth;

    forth->data=5;
    forth->next=fifth;

    fifth->data=6;
    fifth->next=NULL;


    print(head);
    cout<<endl;

    revDuplicate(head);
}
/*
1 2 5 5 6 
after Duplicate remove:1 2 5 6
*/