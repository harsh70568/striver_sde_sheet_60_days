#include<bits/stdc++.h>
/************************************************************
    Following is the Binary Search Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/

int KthLargestNumber(TreeNode<int>* root, int k) 
{
    // Write your code here.
    stack<TreeNode<int>*> st;
    TreeNode<int>* curr = root;
    int count = 0;
    while(!st.empty() || curr)
    {
        if(curr)
        {
            st.push(curr);
            curr = curr->right;
        }
        else
        {
            curr = st.top();
            st.pop();
            count++;
            if(count == k) return curr->data;
            curr = curr->left;
        }
    }
    return -1;
    
}
