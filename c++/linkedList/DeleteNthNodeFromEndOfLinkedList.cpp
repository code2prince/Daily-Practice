//Remove Nth Node From End of List
/*


Given the head of a linked list, remove the nth node from the end of the list and return its head.

 

Example 1:


Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]


Example 2:

Input: head = [1], n = 1
Output: []


Example 3:

Input: head = [1,2], n = 1
Output: [1]
*/

/*
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr=head;
        int size=0;
        while(curr!=NULL){
            curr=curr->next;
            size++;
        }
        if(head->next==NULL){
            return NULL;
        }
        if(size==n){
            return head->next;
        }
        int index=size-n;
        ListNode* prev=head;
        int i=1;
        while(i<index){
            prev=prev->next;
            i++;
        }
        prev->next=prev->next->next;
        return head;

    }
};
*/