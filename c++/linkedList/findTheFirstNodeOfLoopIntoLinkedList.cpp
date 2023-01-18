// Find thr first node of loop in LinkedList

/*

Given a singly linked list of N nodes. Find the first node of the loop if the linked list has a loop.
If a loop is present return the node data of the first node of the loop else return -1.

Example 1:

Input: 1->3->2->4->5
          ^........!       >> here 5 in connected with 3 into a loop

Output: 3
Explanation:
We can see that there exists a loop
in the given linked list and the first
node of the loop is 3.


Example 2:   1->2->3->5->NULL;

Input:

Output: -1
Explanation: No loop exists in the above
linked list.So the output is -1.
*/

/*struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/

/*
class Solution
{
    public:
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast){
                slow=head;
            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
                }
                return slow->data;
            }
        }
        return -1;







        // 2nd approach unordered_map
        Node * temp=head;
        unordered_map<Node*, int>m;
        while(temp!=NULL){
            m[temp]++;
            if(m[temp]>1){
                return temp->data;
            }
            temp=temp->next;
        }
        return -1;
    }

};

*/