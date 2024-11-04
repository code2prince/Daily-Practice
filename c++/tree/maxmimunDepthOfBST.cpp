//--------Maximum Depth of Binary Search Tree---------------------

#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

int maxDepth(Node *root)
{
    if (root != NULL)
    {

        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        return 1 + max(left, right);
    }
};
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);

    int ans=maxDepth(root);   
    cout<<"Max Depth: "<<ans;   //Max Depth: 3
}