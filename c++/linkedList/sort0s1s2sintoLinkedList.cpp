// Given a linked list of 0s, 1s and 2s, sort it.

/*
Example 1:

Input:
N = 8
value[] = {1,2,2,1,2,0,2,2}
Output: 0 1 1 2 2 2 2 2
Explanation: All the 0s are segregated
to the left end of the linked list,
2s to the right end of the list, and
1s in between.



Example 2:

Input:
N = 4
value[] = {2,2,0,1}
Output: 0 1 2 2
Explanation: After arranging all the
0s,1s and 2s in the given format,
the output will be 0 1 2 2.

*/


/*
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        Node* temp=head;
        vector<int>v;
        while(temp!=NULL){
            v.push_back(temp->data);
            temp=temp->next;
        }
        sort(v.begin(),v.end());
        int i=0;
        temp=head;
        while(temp!=NULL){
            temp->data=v[i];
            i++;
            temp=temp->next;
        }
        return head;
        
    }
};

*/

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
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
void sortLinkedList(node* head){
    node* temp=head;
    vector<int>v;
    while(temp!=NULL){
        v.push_back(temp->data);
        temp=temp->next;
    }
    sort(v.begin(), v.end());

    int i=0; 
    temp=head;
    while(temp!=NULL){
        temp->data=v[i];
        i++;
        temp=temp->next;
    }

    while(head!=NULL){
    cout<<head->data<<" ";
    head=head->next;
    } 
}
int main() {
    node* head=new node();
    node* sec=new node();
    node* third=new node();
    node* forth=new node();
    
    head->data=1;
    head->next=sec;
    
    sec->data=0;
    sec->next=third;
    
    third->data=2;
    third->next=forth;

    forth->data=1;
    forth->next=NULL;
    
    cout<<"Before sorting: ";
    print(head);
    cout<<endl;

     cout<<"after sorting: ";
    sortLinkedList(head);

    return 0;
}

/*
Before sorting: 1 0 2 1 
after sorting: 0 1 1 2
*/