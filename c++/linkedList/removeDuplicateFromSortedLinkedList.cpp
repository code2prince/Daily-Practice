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