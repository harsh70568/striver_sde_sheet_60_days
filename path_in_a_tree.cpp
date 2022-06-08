#include<bits/stdc++.h>
/*   
    template <typename T = int>
	class TreeNode
	{
		public:
		T data;
		TreeNode<T> *left;
		TreeNode<T> *right;

		TreeNode(T data)
		{
			this->data = data;
			left = NULL;
			right = NULL;
		}

		~TreeNode()
		{
			if (left != NULL)
			{
		  		delete left;
			}
			if (right != NULL)
			{
			 	delete right;
			}
		}
	};
*/

void solve(TreeNode<int> *root, int x, vector<int> &ans, vector<int> temp)
{
    if(root == NULL) return;
    if(root->data == x)
    {
       temp.push_back(root->data);
       ans = temp;
    }
   temp.push_back(root->data);
    solve(root->left,x,ans,temp);
    solve(root->right,x,ans,temp);
}
vector<int> pathInATree(TreeNode<int> *root, int x)
{
    // Write your code here.
    vector<int> ans;
    vector<int> temp;
    solve(root,x,ans,temp);
    return ans;
    
}
