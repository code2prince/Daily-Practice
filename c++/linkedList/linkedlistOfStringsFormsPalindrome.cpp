// linked list of strings forms a palindrome
/*
Example:
Input :
2
5
a bc d dcb a
4
a bc d ba

Output :
True
False

Explanation:
case 1 : as String "abcddcba" is palindrome the function should return true
case 2 : as String "abcdba" is not palindrome the function should return false
*/


/*
bool compute(Node* root)
{
   string ans="";
   Node* temp=root;
   while(temp!=NULL){
       ans+=temp->data;
       temp=temp->next;
   }
   int start=0;
   int end=ans.length()-1;
   while(start<end){
       if(ans[start++]!=ans[end--])
       return 0;
   }
   return 1;
}
*/