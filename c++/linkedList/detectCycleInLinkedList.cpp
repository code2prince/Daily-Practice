
// Detect cycle into LinkedList




// struct Node
// {
//     int data;
//     struct Node *next;
//     Node(int x) {
//         data = x;
//         next = NULL;
//     }

// */





// class Solution
// {
//     public:
//     //Function to check if the linked list has a loop.
//     bool detectLoop(Node* head)
//     {
//         // your code here
//         if(head==NULL || head->next==NULL){
//             return false;
//         }
//         Node* fast=head;
//         Node* slow=head;
        
//         while(fast->next!=NULL && fast->next->next!=NULL){
//             fast=fast->next->next;
//             slow=slow->next;
//             if(fast==slow)
//             return true;
//         }
//         return false;
//     }
// };