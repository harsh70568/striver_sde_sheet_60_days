/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

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

        ~BinaryTreeNode() {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/
void successor(BinaryTreeNode<int>* root, int &key,int &succ)
{
    if(root == NULL) return;
    while(root)
    {
        if(root->data > key)
        {
            succ = root->data;
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
}
void predecessor(BinaryTreeNode<int>* root, int &key, int &pre)
{
    if(root == NULL) return;
    while(root)
    {
        if(root->data < key)
        {
            pre = root->data;
            root = root->right;
        }
        else
        {
            root = root->left;
        }
    }
}
pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    // Write your code here.
    int succ = -1;
    int pre = -1;
    successor(root,key,succ);
    predecessor(root,key,pre);
     pair<int,int> ans = {pre,succ};  
    return ans;
}
