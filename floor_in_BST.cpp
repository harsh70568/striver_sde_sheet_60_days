

  
TreeNode<int>* solve(TreeNode<int> * root, int X, int &ans)
{
    if(root == NULL) return NULL;
    if(root->val > X)
    {
        solve(root->left,X,ans);
    }
    else
    {
        ans = root->val;
        solve(root->right,X,ans);
    }
}
int floorInBST(TreeNode<int> * root, int X)
{
    // Write your code here.
    int ans = -1;
    solve(root,X,ans);
    return ans;
}
