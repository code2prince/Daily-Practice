//--------------Binary Tree Representaion--------------------

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

//-------------PreOrder Traversal----------------
void preOrder(Node *root)
{
    //----Base Condition ---------
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
//---------------Inorder Traversal---------------------------
void inOrder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
//----------------PostOrder Traversal----------------
void postOrder(Node * root){
    if(root==nullptr){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "PreOder Traversal: ";
    preOrder(root); // PreOder Traversal: 1 2 4 5 3 6 7
    cout << endl;
    cout << "InOrder Traversal: ";
    inOrder(root); // InOrder Traversal: 4 2 5 1 6 3 7
    cout<<endl;
    cout<<"PostOrder Traversal: ";
    postOrder(root);  //PostOrder Traversal: 4 5 2 6 7 3 1
    return 0;
};