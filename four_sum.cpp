#include<bits/stdc++.h>
string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    unordered_map<int,pair<int,int>> m;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<n;j++)
        {
            m[arr[i]+arr[j]]=make_pair(i,j);
        }
    }
    
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int x=arr[i]+arr[j];
            
            if(m.find(target-x)!=m.end())
            {
                pair<int,int> p=m[target-x];
                
                if(i!=p.first && i!=p.second && j!=p.first && j!=p.second)
                    return "Yes";
            }
        }
    }
    return "No";
}
