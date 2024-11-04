//----------------Balanced Binary Tree--------------------

/*
Given a binary tree, determine if it is 
height-balanced
.

 

Example 1:

Input: root = [3,9,20,null,null,15,7]
Output: true

Example 2:

Input: root = [1,2,2,3,3,null,null,4,4]
Output: false
Example 3:

Input: root = []
Output: true
 
*/

/*

class Solution {
public:
    int height(TreeNode* root){
        int leftHeight=0,rightHeight=0;
        if(root!=NULL){
         leftHeight=height(root->left);
         rightHeight=height(root->right);
        }
        return 1+max(leftHeight,rightHeight);
    };
    
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);

        bool diff=abs(height(root->left)-height(root->right))<=1;
        if(left && right && diff){
            return true;
        }else{
            return false;
        }

    }
};

*/