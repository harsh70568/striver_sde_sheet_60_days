#include<bits/stdc++.h>
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    double ans = 0.0;
    vector<pair<double,int>> v;
    for(auto it : items)
    {
        v.push_back({(double)it.second/(double)it.first,it.first});
    }
    
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    
    for(auto it : v)
    {
        if(w == 0) break;
        int curr_weight = min(it.second,w);
        ans += curr_weight*it.first;
        w -= curr_weight;
    }
    return ans;
}
