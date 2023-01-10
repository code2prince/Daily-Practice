//Insert in Middle of Linked List
/*
Given a linked list of size N and a key. The task is to insert the key in the middle of the linked list.

Example 1:

Input:
LinkedList = 1->2->4
key = 3
Output: 1 2 3 4
Explanation: The new element is inserted
after the current middle element in the
linked list.



Example 2:

Input:
LinkedList = 10->20->40->50
key = 30
Output: 10 20 30 40 50

*/



/*
Node* insertInMiddle(Node* head, int x)
{

	Node* slow=head;
	Node* fast=head;
	while(fast!=NULL && fast->next!=NULL && fast->next->next!=NULL){
	    slow=slow->next;
	    fast=fast->next->next;
	}
	   Node* temp=new Node(x);
	   temp->next=slow->next;
	   slow->next=temp;
	   return head;
}
*/ 