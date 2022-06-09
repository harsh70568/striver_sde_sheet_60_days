#include<bits/stdc++.h>
TreeNode<int>* solve(vector<int> &preorder,int max,int &index)
{
    if(index == preorder.size() || preorder[index] > max) return NULL;
    TreeNode<int>* root = new TreeNode<int>(preorder[index]);
    index++;
    root->left = solve(preorder,root->data,index);
    root->right = solve(preorder,max,index);
    return root;
}
TreeNode<int>* preOrderTree(vector<int> &preOrder){
    // Write your code here.
    int index = 0;
    TreeNode<int>* root = solve(preOrder,INT_MAX,index);
    return root;
}
