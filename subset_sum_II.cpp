#include<bits/stdc++.h>
void solve(vector<int> arr, int n, vector<int> temp, int index, set<vector<int>> &s)
{
    if(index >= n)
    {
        s.insert(temp);
        return;
    }
    
    temp.push_back(arr[index]);
    solve(arr,n,temp,index+1,s);
    temp.pop_back();
    solve(arr,n,temp,index+1,s);
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    sort(arr.begin(),arr.end());
    vector<int> temp;
    set<vector<int>> s;
    solve(arr,n,temp,0,s);
    
    vector<vector<int>> ans(s.begin(),s.end());
    return ans;
    
}
