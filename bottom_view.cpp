#include<bits/stdc++.h>

vector<int> bottomView(BinaryTreeNode<int> * root){

    // Write your code here.
    vector<int> ans;
    if(root == NULL) return ans;
    map<int,int> mpp;
    queue<pair<BinaryTreeNode<int>*,int>> q;
    q.push({root,0});
    while(!q.empty())
    {
        auto it = q.front();
        q.pop();
        
        BinaryTreeNode<int>* curr = it.first;
        int level = it.second;
        
        mpp[level] = curr->data;
        if(curr->left) q.push({curr->left,level-1});
        if(curr->right) q.push({curr->right,level+1});
    }
    for(auto it : mpp)
    {
        ans.emplace_back(it.second);
    }
    return ans;
}
