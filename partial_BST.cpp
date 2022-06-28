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
bool solve(BinaryTreeNode<int>*root, int mini, int maxi)
{
    if(root == NULL) return true;
    if(root->data < mini || root->data > maxi) return false;
    
    return solve(root->left,mini,root->data) && solve(root->right,root->data,maxi);
}
bool validateBST(BinaryTreeNode<int> *root) {
    // Write your code here
    return solve(root,INT_MIN,INT_MAX);
}
