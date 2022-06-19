#include<bits/stdc++.h>

// Here i a sorting according to the ending time so that meeting ending first increases chances of other meetings to held.


bool cmp(const pair<int,int> &a, pair<int,int> &b)
{
    return (a.second < b.second);
}
int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    int count  = 1;
    vector<pair<int,int>> ans;
    for(int i = 0; i < start.size(); i++)
    {
        ans.push_back({start[i],finish[i]});
    }
    sort(ans.begin(),ans.end(),cmp);
    int free_at = ans[0].second;
    for(int i = 1; i < ans.size(); i++)
    {
        if(ans[i].first >= free_at)
        {
            count++;
            free_at = ans[i].second;
        }
    }
    return count;
}
