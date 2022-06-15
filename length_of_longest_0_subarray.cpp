#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
    int sum = 0;
    int max_length = 0;
    unordered_map<int,int> mpp;
    for(int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if(sum == 0)
        {
            max_length = i+1;
        }
        else
        {
            if(mpp.find(sum) != mpp.end())
            {
                max_length = max(max_length,i-mpp[sum]);
            }
            else
            {
                mpp[sum] = i;
            }
        }
    }
    return max_length;

}
