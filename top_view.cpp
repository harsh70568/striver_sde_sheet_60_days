#include<bits/stdc++.h>

vector<int> getTopView(TreeNode<int> *root) {
    // Write your code here.
    vector<int> ans;
        if(root == NULL) return ans;
        map<int,int> mpp;
        queue<pair<TreeNode<int>*,int>> q;
        q.push({root,0});
        while(!q.empty())
        {
            pair<TreeNode<int>*,int> temp = q.front();
            q.pop();
            
            TreeNode<int>* curr = temp.first;
            int level = temp.second;
            
            if(mpp.find(level) == mpp.end())
            {
                mpp[level] = curr->val;
            }
            
            if(curr->left) q.push({curr->left,level-1});
            if(curr->right) q.push({curr->right,level+1});
        }
        
        for(auto it : mpp)
        {
            ans.push_back(it.second);
        }
        return ans;
}
