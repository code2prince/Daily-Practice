//Reverse a Linked List in groups of given size.
/*

Given a linked list of size N. The task is to reverse every k nodes (where k is an input to the function) in the linked list.
 If the number of nodes is not a multiple of k then left-out nodes, in the end, should be considered as a group and must be reversed 

Example 1:

Input:
LinkedList: 1->2->2->4->5->6->7->8
K = 4
Output: 4 2 2 1 8 7 6 5 
Explanation: 
The first 4 elements 1,2,2,4 are reversed first 
and then the next 4 elements 5,6,7,8. Hence, the 
resultant linked list is 4->2->2->1->8->7->6->5.



Example 2:

Input:
LinkedList: 1->2->3->4->5
K = 3
Output: 3 2 1 5 4 
Explanation: 
The first 3 elements are 1,2,3 are reversed 
first and then elements 4,5 are reversed.Hence, 
the resultant linked list is 3->2->1->5->4.

*/




/*
class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        struct node* curr=head;
        struct node* fwd=NULL;
        struct node* prev=NULL;
        int cnt=0;
        while(curr!=NULL && cnt< k){
            fwd=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fwd;
            cnt++;
        }
        //>>> recusive call for next kth 
        if(head!=NULL){
            head->next=reverse(fwd,k);
        }
        return prev; 
    }
};


*/