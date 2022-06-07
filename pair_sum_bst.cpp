
void inorder(BinaryTreeNode<int> *root,vector<int> &ans)
{
    if(root != NULL)
    {
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
        
    }
}
bool pairSumBst(BinaryTreeNode<int> *root, int k)
{
    // Write your code here
    if(root == NULL) return false;
    vector<int> ans;
    inorder(root,ans);
    int i = 0;
    int j = ans.size()-1;
    while(i < j)
    {
        if(ans[i] + ans[j] == k) return true;
        else if(ans[i] + ans[j] < k) i++;
        else j--;
    }
    return false;
}
