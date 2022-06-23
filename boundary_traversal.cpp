
bool is_leaf(TreeNode<int>*root)
{
    if(root->left == NULL && root->right == NULL) return true;
    else return false;
}
void left_traversal(TreeNode<int>* root, vector<int> &ans)
{
    TreeNode<int>* curr = root->left;
    while(curr)
    {
        if(is_leaf(curr) == false) ans.push_back(curr->data);
        if(curr->left)  curr = curr->left;
        else curr = curr->right;
    }
}

void right_traversal(TreeNode<int>*root, vector<int> &ans)
{
    TreeNode<int> *curr = root->right;
    vector<int> temp;
    while(curr)
    {
        if(is_leaf(curr) == false) temp.push_back(curr->data);
        if(curr->right) curr = curr->right;
        else curr = curr->left;
    }
    
    for(int i = temp.size()-1; i >= 0; i--)
    {
        ans.push_back(temp[i]);
    }
}

void leaf_traversal(TreeNode<int>*root, vector<int> &ans)
{
    if(is_leaf(root))
    {
        ans.push_back(root->data);
        return;
    }
    if(root->left) leaf_traversal(root->left,ans);
    if(root->right) leaf_traversal(root->right,ans);
}


    
vector<int> traverseBoundary(TreeNode<int>* root){
    // Write your code here.
    vector<int> ans;
    if(root == NULL) return ans;
    if(is_leaf(root) == false) ans.push_back(root->data);
     left_traversal(root,ans);
       leaf_traversal(root,ans);
       right_traversal(root,ans);
       return ans;
}
