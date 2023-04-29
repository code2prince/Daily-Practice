// Rotate LL 
/*
Given the head of a linked list, rotate the list to the right by k places.

 

Example 1:
Input: head = [1,2,3,4,5], k = 2
Output: [4,5,1,2,3]


Example 2:
Input: head = [0,1,2], k = 4
Output: [2,0,1]
*/

/*
class Solution {
public:
int n=0;
 ///>>>>>>>*********function to find Size of LL ******************
int size(ListNode* head){
    while(head!=NULL){
        n++;
        head=head->next;
    }
    return n;
}

// >>>>>>>*********function to rotate ******************
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL){
            return head;
        }
        int n=size(head);
        
        int loop=k%n;
        loop=n-loop;

    // ******Edge cases****
        if(n==1 || loop==n){
            return head;
        }

        int j=0;
        ListNode* temp=head;
        ListNode* firstAddress=head;
        while(temp!=NULL){
            j++;
            if(j==loop){
                firstAddress=temp->next;
                temp->next=NULL;
                break;
            }
            temp=temp->next;
        }
        temp=firstAddress;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=head;
        return firstAddress;
    }
};
*/


// another apporach TUF
 /* if(!head || !head->next || k==0){
            return head;
        }
        Node*temp=head;
        int cnt=1;
        while(temp->next && ++cnt){
            temp=temp->next;
        }
        temp->next=head;
        k=k%cnt;
        k=cnt-k;
        while(k--){
            temp=temp->next;
        }
        head=temp->next;
        temp->next=NULL;
        return head;
    }

    */