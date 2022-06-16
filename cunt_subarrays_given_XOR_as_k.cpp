#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    unordered_map<int,int> mpp;
    int do_xor = 0; 
    int count = 0;
    for(auto it : arr)
    {
        do_xor ^= it;
        if(do_xor == x)
        {
            count++;
        }
        
        if(mpp.find(do_xor^x) != mpp.end())
        {
            count += mpp[do_xor^x];
        }
        
        mpp[do_xor]++;
        
    }
    return count;
}
