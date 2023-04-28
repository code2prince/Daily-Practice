// Check LL is palindrome or not 



/* // 1st approach 

    bool isPalindrome(Node *head)
    {
        vector<int>arr;
        Node* temp=head;
        while(temp!=NULL){
            arr.push_back(temp->data);
            temp=temp->next;
        }
        
        int n=arr.size();
        for(int i=0; i<n/2; i++){
            if(arr[i]!=arr[n-i-1]){
                return false;
            }
        }
        return true;
        
    }
*/


/*// 2nd approach    >>>>  2 pointer 

 bool checkPalindrome(vector<int>v){
        int s=0;
        int e=v.size()-1;
        while(s<=e){
            if(v[s]!=v[e]){
                return false;
            }
            s++;
            e--;
        }
        return true;
    }


    bool isPalindrome(Node *head)
    {
        vector<int>arr;
        Node* temp=head;
        while(temp!=NULL){
            arr.push_back(temp->data);
            temp=temp->next;
        }
        
        return checkPalindrome(v);
     }   
        
        

*/


/*
// 3rd approach  without extra space 
class Solution{
private:
    // finding mid
  Node* getMiddle(Node* head){
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL ){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
  }
  
  //reverse 
  Node * reverse(Node* head){
      Node* prev=NULL;
        Node* fwd=NULL;
        Node* curr=head;
        while(curr!=NULL){
          //Node* fwd=curr->next;
          fwd=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fwd;
        }
        return prev;
  }
  public:
    
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if(head->next==NULL ){
            return true;
        }

       //>>>> step 1 find middle
       Node* middle=getMiddle(head);
        
        //>>>> reverse after 2nd half
        Node* temp=middle->next;
        middle->next=reverse(temp);
        
        //>>>>> compare both half
        Node* head1=head;
        Node* head2=middle->next;
        while(head2!=NULL){
            if(head1->data!=head2->data){
                return false;
            }
            head1=head1->next;
            head2=head2->next;
        }
        temp=middle->next;
        middle->next=reverse(temp);
        
        return true;
        
        //>>>>>>>>>>>>>>>>>> or
        
        // Node* first=head;
        // while(prev!=NULL){
        //     if(first->data!=prev->data)
        //     return false;
        //     first=first->next;
        //     prev=prev->next;
        // }
        // return true;  
    }
};


*/