#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &nums)
{
    // Write your code here.
    vector<int> ans;
    int elem1 = -1;
    int elem2 = -1;
    int c1 = 0, c2 = 0;
    int n = nums.size();
    
    for(int i = 0; i < nums.size(); i++)
    {
        if(elem1 == nums[i]) c1++;
        else if(elem2 == nums[i]) c2++;
        else if(c1 == 0) 
        {
            elem1 = nums[i];
            c1 = 1;
        }
        else if(c2 == 0)
        {
            elem2 = nums[i];
            c2 = 1;
        }
        else
        {
            c1--;
            c2--;
        }
    }
    
    c1 = c2 = 0;
    for(int i = 0; i < n; i++)
    {
        if(nums[i] == elem1) c1++;
        else if(nums[i] == elem2) c2++;
    }
    
    if(c1 > n/3) ans.push_back(elem1);
    if(c2 > n/3) ans.push_back(elem2);
    return ans;
}
