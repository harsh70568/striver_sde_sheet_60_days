
BinaryTreeNode<int>* solve(BinaryTreeNode<int> *node, int x, int &ans)
{
    if(node == NULL) return NULL;
    if(node->data >= x)
    {
        ans = node->data;
        solve(node->left,x,ans);
    }
    else if(node->data < x)
    {
        solve(node->right,x,ans);
    }
    
}
int findCeil(BinaryTreeNode<int> *node, int x){
    // Write your code here.
    int ans = -1;
    solve(node,x,ans);
    return ans;
}
