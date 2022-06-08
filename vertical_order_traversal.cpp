#include<bits/stdc++.h>
    



vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
    //    Write your code here.
    vector<int> ans;
    if(root == NULL) return ans;
    map<int,map<int,vector<int>>> mpp;
    queue<pair<TreeNode<int>*,pair<int,int>>> q;
    q.push({root,{0,0}});
    while(!q.empty())
    {
        pair<TreeNode<int>*,pair<int,int>> temp = q.front();
        q.pop();
        
        TreeNode<int>* curr = temp.first;
        int hd = temp.second.first;
        int level = temp.second.second;
        
        mpp[hd][level].push_back(curr->data);
        
        if(curr->left) q.push({curr->left,{hd-1,level+1}});
        if(curr->right) q.push({curr->right,{hd+1,level+1}});
    }
    
    for(auto i : mpp)
    {
        for(auto j : i.second)
        {
            for(auto k : j.second)
            {
                ans.push_back(k);
            }
        }
    }
    return ans;
}
