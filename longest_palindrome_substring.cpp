#include<bits/stdc++.h>
string longestPalinSubstring(string str)
{
    // Write your code here.
    int start = 0;
    int n = str.size();
    int max_length = 1;
    for(int i = 1; i < n; i++)
    {
        int left = i-1;
        int right = i+1;
        while(left >= 0 && right < n && str[left] == str[right])
        {
            if(max_length < right-left+1)
            {
                max_length = right-left+1;
                start = left;
            }
            left--;
            right++;
        }
        
        left = i-1;
        right = i;
        while(left >= 0 && right < n && str[left] == str[right])
        {
            if(max_length < right-left+1)
            {
                max_length = right-left+1;
                start = left;
            }
            left--;
            right++;
        }
    }
    return str.substr(start,max_length);
}
