// Reverse both part of linked list





/*
Given a linked list and a number k. You have to reverse first part of linked list with k nodes and the second part with n-k nodes.

Example 1:

Input: 1 -> 2 -> 3 -> 4 -> 5
k = 2
Output: 2 -> 1 -> 5 -> 4 -> 3
Explanation: As k = 2 , so the first part 2
nodes: 1 -> 2 and the second part with 3 nodes:
3 -> 4 -> 5. Now after reversing the first part: 
2 -> 1 and the second part: 5 -> 4 -> 3.
So the output is: 2 -> 1 -> 5 -> 4 -> 3
Example 2:

Input: 1 -> 2 -> 4 -> 3
k = 3
Output: 4 -> 2 -> 1 -> 3
Explanation: As k = 3 , so the first part 
3 nodes: 4 -> 2 -> 1 and the second part
with 1 nodes: 3. Now after reversing the 
first part: 1 -> 2 -> 4 and the 
second part: 3. So the output is: 1 -> 2 -> 4 -> 3

*/


/*

class Solution
{
public:
   
    Node *reverse(Node *head, int k)
    {
        Node* curr=head;
        Node* prev=NULL;
        Node* fwd=NULL;
        int c=0;
        while(curr!=NULL && c<k){
            fwd=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fwd;
            c++;
        }
        if(fwd==NULL){
            return prev;
        }
        head->next=reverse(fwd,INT_MAX);
        return prev;
    }
};

*/