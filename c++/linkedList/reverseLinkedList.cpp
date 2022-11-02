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
   