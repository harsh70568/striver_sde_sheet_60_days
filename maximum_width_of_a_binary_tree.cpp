#include<bits/stdc++.h>
int getMaxWidth(TreeNode<int> *root)
{
    // Write your code here.
    if(root == NULL) return 0;
    queue<TreeNode<int>*> q;    -----> Here this question is wrongly given, questions asks how many maximum nodes a level can have (among all level),  but this question should be the maximum length between two nodes in any level
    q.push(root);
    int cnt = 0;
    while(!q.empty()){
        int n = q.size();
        cnt = max(cnt, n);
        
        for(int i = 0; i < n; i++){
            TreeNode<int> *tmp = q.front();
            q.pop();
            if(tmp->left) q.push(tmp->left);
            if(tmp->right) q.push(tmp->right);
        }
    }
    
    return cnt;
    
}
