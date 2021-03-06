#include <bits/stdc++.h> 
int solve(int i, int j, int m, int n, vector<vector<int>> &dp)
{
    if(i == (m-1) || j == (n-1)) return 1;
    if(i >= m || j >= n) return 0;
    
    if(dp[i][j] != -1) return dp[i][j];
    
    int l = solve(i+1,j,m,n,dp);
    int r = solve(i,j+1,m,n,dp);
    return dp[i][j] = l+r;
}
int uniquePaths(int m, int n) {
	// Write your code here.
    vector<vector<int>> dp(m,vector<int>(n,-1));
    int i = 0;
    int j = 0;
    
    return solve(i,j,m,n,dp);
    
}
