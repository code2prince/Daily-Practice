// find the middle element of linked list

// class solution{
//     public:
//     listNode* middleNode(listNode* head){
//         listNode slow=head, fast=head;
//         while(fast!= NULL && fast->next!=NULL){
//             slow=slow->next;           //(or slow=slow.next;)
            
//             fast=fast->next->next;     ///( fast=fast.next.next;)
//         }
//         return slow;
//     }
// };