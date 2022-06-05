/************************************************************

    Following is the Binary Tree node structure:

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



************************************************************/
void postorder(BinaryTreeNode<int> *root, vector<int> &ans)
{
    if(root)
    {
        postorder(root->left,ans);
        postorder(root->right,ans);
        ans.push_back(root->data);
    }
}
void preorder(BinaryTreeNode<int> *root, vector<int> &ans)
{
    if(root)
    {
        ans.push_back(root->data);
        preorder(root->left,ans);
        preorder(root->right,ans);
    }
}
void inorder(BinaryTreeNode<int> *root, vector<int> &ans)
{
    if(root != NULL)
    {
        inorder(root->left, ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
}
vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here.
    vector<vector<int>> ans;
    vector<int> in;
    vector<int> pre;
    vector<int> post;
    inorder(root,in);
    preorder(root,pre);
    postorder(root,post);
    ans.push_back(in);
    ans.push_back(pre);
    ans.push_back(post);
    return ans;
    
}
