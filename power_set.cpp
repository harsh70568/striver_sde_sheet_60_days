// I have done it using recursion, where for each of the index I have two choices whether to take it or not to take it.

void solve(vector<int> v, vector<vector<int>> &ans, vector<int> temp, int index)
{
    if(index >= v.size())
    {
        ans.push_back(temp);
        return;
    }
    
    temp.push_back(v[index]);
    solve(v,ans,temp,index+1);
    temp.pop_back();
    solve(v,ans,temp,index+1);
}
vector<vector<int>> pwset(vector<int>v)
{
    //Write your code here
    vector<vector<int>> ans;
    vector<int> temp;
    solve(v,ans,temp,0);
    return ans;
}
