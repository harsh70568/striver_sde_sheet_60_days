 /************************************************************

    Following is the TreeNode class structure.

    template <typename T>
    class TreeNode {
        public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void preorder(TreeNode<int>*root, vector<int> &ans)
{
    if(root)
    {
        ans.push_back(root->data);
        preorder(root->left,ans);
        preorder(root->right,ans);
    }
}
TreeNode<int> *flattenBinaryTree(TreeNode<int> *root)
{
    // Write your code here.
    vector<int> ans;
    preorder(root,ans);
    root->left = NULL;
    root->right = NULL;
    
    TreeNode<int>* curr = root;
    for(int i = 1; i < ans.size(); i++)
    {
        TreeNode<int>* temp = new TreeNode<int>(ans[i]);
        curr->left = NULL;
        curr->right = temp;
        curr = curr->right;
    }
    return root;
    
    
}
