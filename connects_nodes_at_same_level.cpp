
#include<bits/stdc++.h>

void connectNodes(BinaryTreeNode< int > *root) {
    // Write your code here.
    if(root == NULL) return;
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty())
    {
        int size = q.size();
       vector<BinaryTreeNode<int>*> ans;
        for(int i = 0; i < size; i++)
        {
            BinaryTreeNode<int>* curr = q.front();
            q.pop();
            ans.push_back(curr);
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
        for(int i = 0; i < ans.size()-1; i++)
        {
            ans[i]->next = ans[i+1];
        }
    }
}
