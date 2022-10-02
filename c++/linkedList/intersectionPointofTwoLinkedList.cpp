// intersection point of linked list

// class solution{
//     public:
//     listNode *getIntersectionNode(listNode *headA, listNode *headB){
//         if(headA==NULL || headB==NULL){
//             return NULL;
//         }
//         listnode *a=headA;
//         listNode *b=headB;

//         while(a!=b){
//             a=a==NULL ? headB : a->next;
//             b=b==NULL ? headA : b->next;
//         }
//         return a;
//     }
// }