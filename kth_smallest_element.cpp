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

int kthSmallest(TreeNode<int> *root, int k)
{
	//	Write the code here.
    stack<TreeNode<int>*> st;
    TreeNode<int>* curr = root;
    int count = 0;
    while(!st.empty() || curr)
    {
        if(curr)
        {
            st.push(curr);
            curr = curr->left;
        }
        else
        {
            curr = st.top();
            st.pop();
            count++;
            if(count == k) return curr->data;
            curr = curr->right;
        }
    }
    
}
