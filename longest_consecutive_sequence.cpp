#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    if(n == 0) return 0;
    unordered_map<int,int> mpp;
    for(int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    
    int longest_streak = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        int curr_elem = arr[i];
        if(mpp.find(curr_elem-1) == mpp.end())
        {
            int curr_num = curr_elem;
            int curr_streak = 1;
            while(mpp.find(curr_num+1) != mpp.end())
            {
                curr_streak++;
                curr_num++;
            }
            longest_streak = max(longest_streak,curr_streak);
        }
    }
    return (longest_streak > 0) ? longest_streak : 1;
}
