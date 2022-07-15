#include<bits/stdc++.h>
vector<int> slidingWindowMaximum(vector<int> &v, int &k)
{
     deque<int>dq;
    vector<int>ans;
    
    for(int i=0;i<k;i++)
    {
        while(!dq.empty() and dq.back() < v[i]){
            dq.pop_back();
        }
        dq.push_back(v[i]);
    }
    
    ans.push_back(dq.front());
    for(int i=k;i<v.size();i++)
    {
        if(dq.front() == v[i-k]) dq.pop_front();
         while(!dq.empty() and dq.back() < v[i]){
            dq.pop_back();
        }
        dq.push_back(v[i]);
        ans.push_back(dq.front());
    }
    return ans;
}
