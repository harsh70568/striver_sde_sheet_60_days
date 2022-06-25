/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
BinaryTreeNode<int>* solve(BinaryTreeNode<int>*root, BinaryTreeNode<int>*&dummy, BinaryTreeNode<int>*&curr)
{
    if(root)
    {
        solve(root->left,dummy,curr);
        if(curr == NULL)
        {
            curr = root;
            dummy = root;
        }
        else
        {
            curr->right = root;
            curr->right->left = curr;
            curr = curr->right;
        }
        solve(root->right,dummy,curr);
    }
}
BinaryTreeNode<int>* BTtoDLL(BinaryTreeNode<int>* root) {
    // Write your code here
    BinaryTreeNode<int>* curr = NULL;
    BinaryTreeNode<int>* dummy = NULL;
    solve(root,dummy,curr);
    return dummy;
}
