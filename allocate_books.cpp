#include<bits/stdc++.h>
bool is_possible(vector<int> time, int n, int m, long long mid)
{
    long long count = 1;
    long long sum = 0;
    
    for(int i = 0; i < m; i++)
    {
        if(sum + time[i] <= mid)
        {
            sum += time[i];
        }
        else
        {
            count++;
            if(count > n || time[i] > mid)
            {
                return false;
            }
            sum = time[i];
        }
    }
    return true;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	// Write your code here.
    long long start = 0;
    long long sum = 0;
    for(int i = 0; i < m; i++)
    {
        sum += time[i];
    }
    long long end = sum;
    long long ans = -1;
    while(start <= end)
    {
        long long mid = (start+end)/2;
        
        if(is_possible(time,n,m,mid))
        {
            ans = mid;
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }
    return ans;
}
