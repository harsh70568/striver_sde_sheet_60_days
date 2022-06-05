#include<bits/stdc++.h>
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    // Write your code here!
    vector<int> ans;
    if(root == NULL) return ans;
    stack<int> st;
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    bool flag = 0;
    while(!q.empty())
    {
       int size = q.size();
       for(int i = 0; i < size; i++)
       {
             BinaryTreeNode<int>* curr = q.front();
             q.pop();
           if(flag == 0)
           {
               ans.push_back(curr->data);
           }
           else
           {
               st.push(curr->data);
           }
              if(curr->left) q.push(curr->left);
           if(curr->right) q.push(curr->right);
       }
        flag = !flag;
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
    }
    return ans;
}
