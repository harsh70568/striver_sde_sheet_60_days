#include<bits/stdc++.h>
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    // Write your code here.
    unordered_map<int,int> mpp;
    for(int i = 0; i < arr.size(); i++)
    {
        mpp[arr[i]]++;
    }
    
   vector<pair<int,int>> temp;
    vector<int> ans;
    for(auto it : mpp)
    {
        temp.push_back({it.second,it.first});
    }
    sort(temp.begin(),temp.end());
    reverse(temp.begin(),temp.end());
    for(auto it : temp)
    {
        if(k == 0) break;
        ans.push_back(it.second);
        k--;
    }
    sort(ans.begin(),ans.end());
    return ans;
}
