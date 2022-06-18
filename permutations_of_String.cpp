void solve(string s, vector<string> &ans, int index)
{
    if(index >= s.length())
    {
        ans.push_back(s);
        return;
    }
    
    for(int i = index; i < s.length(); i++)
    {
        swap(s[index],s[i]);
        solve(s,ans,index+1);
        swap(s[index],s[i]);
    }
}
vector<string> findPermutations(string &s) {
    // Write your code here.
    vector<string> ans;
    int index = 0;
    solve(s,ans,index);
    return ans;
}
