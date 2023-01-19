// remove duplicate from unsorted linked list

/*
Input:
N = 4
value[] = {5,2,2,4}
Output: 5 2 4
Explanation:Given linked list elements are
5->2->2->4, in which 2 is repeated only.
So, we will delete the extra repeated
elements 2 from the linked list and the
resultant linked list will contain 5->2->4



Example 2:

Input:
N = 5
value[] = {2,2,2,2,2}
Output: 2
Explanation:Given linked list elements are
2->2->2->2->2, in which 2 is repeated. So,
we will delete the extra repeated elements
2 from the linked list and the resultant
linked list will contain only 2.
*/














/*

/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

/*
class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
    //  map<int,bool>m;
    //  Node* root=head;
    //  while(root->next!=NULL){
    //      m[root->data]=true;
    //      if(m[root->next->data]){
    //          Node* a=root->next;
    //          while(a!=NULL && m[a->data]){
    //              a=a->next;
    //          }
    //          root->next=a;
    //          if(a==NULL)
    //              break;
    //      }
    //      root=root->next;
    //  }
    //  return head;
    
    
    // 2nd approach unordered set
    unordered_set<int>s;
    Node* curr=head;
    if(curr==NULL){
        return head;
    }else{
        s.insert(curr->data);
    }
    while(curr!=NULL  && curr->next!=NULL){
        if(s.find(curr->next->data)!= s.end()){
            curr->next=curr->next->next;
        }else{
            s.insert(curr->next->data);
            curr=curr->next;
        }
    }
            return head;
    
    }
    
};
*/