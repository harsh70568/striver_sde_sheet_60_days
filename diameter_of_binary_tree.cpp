/************************************************************

    Following is the TreeNode class structure

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
int solve(TreeNode<int> *root, int &ans)
{
    if(root == NULL) return 0;
    
    int l = solve(root->left,ans);
    int r = solve(root->right,ans);
    
    ans = max(ans,l+r);   --> Two possibility, my longest path may or may not pass through root.
    return max(l,r)+1;
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
	// Write Your Code Here.
    int ans = 0;
    solve(root,ans);
    return ans;
}
