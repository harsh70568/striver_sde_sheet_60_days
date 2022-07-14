#include<bits/stdc++.h>
int getMedian(vector<vector<int>> &matrix)
{
    // Write your code here.
    int r = matrix.size();
    int c = matrix[0].size();
    vector<int> ans;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            ans.push_back(matrix[i][j]);
        }
    }
    sort(ans.begin(),ans.end());
    int size = ans.size();
    if(size % 2 == 0)
    {
        int first = ans[size/2];
        int second = ans[(size/2)-1];
        return (first+second)/2;
    }
    else
    {
        return ans[size/2];
    }
}
