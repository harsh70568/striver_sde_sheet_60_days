void solve(int** arr, int n ,int m , int i, int j)
{
    if(i>=n || j>=m || j<0 || i<0 || arr[i][j]!=1)
    {
        return ;
    }
    
    arr[i][j]=2;
    solve(arr,n,m,i+1,j);
    solve(arr,n,m,i,j+1);
    solve(arr,n,m,i-1,j);
    solve(arr,n,m,i,j-1);
    solve(arr,n,m,i+1,j+1);
    solve(arr,n,m,i+1,j-1);
    solve(arr,n,m,i-1,j+1);
    solve(arr,n,m,i-1,j-1);
}
int getTotalIslands(int** arr, int n, int m)
{
    int ans=0;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           if(arr[i][j]==1)
           {
               solve(arr ,n ,m ,i ,j );
               ans++;
           }
       }
   }
    return ans;
}
