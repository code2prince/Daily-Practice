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