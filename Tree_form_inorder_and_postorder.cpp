#include<bits/stdc++.h>
/************************************************************
   
   Following is the TreeNode class structure
   
   class TreeNode<T>
   { 
   public:
        T data; 
        TreeNode<T> *left;
        TreeNode<T> *right;
   
        TreeNode(T data) 
  		{ 
            this -> data = data; 
            left = NULL; 
            right = NULL; 
        }
   };
   
   
 ************************************************************/
TreeNode<int>* solve(int ps, int pe, vector<int> postorder, int is, int ie, vector<int> inorder, unordered_map<int,int> &mpp)
{
    if(inorder.size() != postorder.size()) return NULL;
    if(ps > pe || is > ie) return NULL;
    TreeNode<int>* root = new TreeNode<int>(postorder[pe]);
    
    int index = mpp[root->data];
    int nums_left = index - is;
    
    root->left = solve(ps,ps+nums_left-1,postorder,is,index-1,inorder,mpp);
    root->right = solve(ps+nums_left,pe-1,postorder,index+1,ie,inorder,mpp);
    return root;
}

TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inOrder) 
{
	// Write your code here.
    unordered_map<int,int> mpp;
    for(int i = 0; i < inOrder.size(); i++)
    {
        mpp[inOrder[i]] = i;
    }
    return solve(0,postOrder.size()-1,postOrder,0,inOrder.size()-1,inOrder,mpp);
}
