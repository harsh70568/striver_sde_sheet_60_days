void solve(vector<int> arr, int n, int k, vector<vector<int>> &ans, vector<int> temp, int index)
{
    if(index >= n)
    {
        int sum = accumulate(temp.begin(),temp.end(),0);   // Calculating my subset sum.
        if(sum == k)                                        // Checking if my subset sum equals to K.
        {
            ans.push_back(temp);
        }
        return;
    }
    
    temp.push_back(arr[index]);
    solve(arr,n,k,ans,temp,index+1);
    temp.pop_back();
    solve(arr,n,k,ans,temp,index+1);
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    vector<vector<int>> ans;
    vector<int> temp;
    int index = 0;
    solve(arr,n,k,ans,temp,index);
    return ans;
}
