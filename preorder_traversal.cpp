/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
vector<int> getPreOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int> ans;
    if(root == NULL) return ans;
    stack<TreeNode*> st;
    st.push(root);
    while(!st.empty())
    {
        TreeNode* curr = st.top();
        st.pop();
        ans.push_back(curr->data);
        if(curr->right) st.push(curr->right);
        if(curr->left) st.push(curr->left);
    }
    return ans;
}
