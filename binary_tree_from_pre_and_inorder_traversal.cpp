#include<bits/stdc++.h>
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

TreeNode<int>* solve(int ps, int pe, vector<int> preorder, int is, int ie, vector<int> inorder, unordered_map<int,int> &mpp)
{
    if(preorder.size() != inorder.size()) return NULL;
    if(ps > pe || is > ie) return NULL;   // Base case
    
    TreeNode<int>* root = new TreeNode<int>(preorder[ps]);
    int index = mpp[root->data];
    int nums_left = index - is;
    
    root->left = solve(ps+1,ps+nums_left,preorder,is,index-1,inorder,mpp);
    root->right = solve(ps+nums_left+1,pe,preorder,index+1,ie,inorder,mpp);
    return root;
}
TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
	//    Write your code here
    unordered_map<int,int> mpp;    // inserting into map so that we can find root into our inorder traversal in O(1) time
    for(int i = 0; i < inorder.size(); i++)
    {
        mpp[inorder[i]] = i;
    }
    return solve(0,preorder.size()-1,preorder,0,inorder.size()-1,inorder,mpp);
}
