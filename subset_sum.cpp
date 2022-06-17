void solve(vector<int> num, vector<int> &ans, int index, int sum)
{
    if(index >= num.size())
    {
        ans.push_back(sum);
        return;
    }
    
    solve(num,ans,index+1,sum+num[index]);
    solve(num,ans,index+1,sum);
}
vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    vector<int> ans;
    int index = 0;
    int sum = 0;
    solve(num,ans,index,sum);
    sort(ans.begin(),ans.end());
    return ans;
}
