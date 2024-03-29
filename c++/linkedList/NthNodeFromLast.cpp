// Nth node from end of linked list

/*
Example 1:

Input:
N = 2
LinkedList: 1->2->3->4->5->6->7->8->9
Output: 8
Explanation: In the first example, there
are 9 nodes in linked list and we need
to find 2nd node from end. 2nd node
from end is 8.



Example 2:

Input:
N = 5
LinkedList: 10->5->100->5
Output: -1
Explanation: In the second example, there
are 4 nodes in the linked list and we
need to find 5th from the end. Since 'n'
is more than the number of nodes in the
linked list, the output is -1.

*/





/*
int getNthFromLast(Node *head, int n)
{
       Node* curr=head;
       Node* prev=head;
       int count=0;
       while(curr!=NULL){
       if(count>=n)
            prev=prev->next;
           curr=curr->next;
           count++;
       }
       if(count<n)
       return -1;
       return prev->data;
       
}
*/
