void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    stack<pair<int,int>> st;
    int m = matrix.size();
    int n = matrix[0].size();
    
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(matrix[i][j] == 0)
            {
                st.push({i,j});
            }
        }
    }
    
    while(!st.empty())
    {
        int r = st.top().first;
        int c = st.top().second;
        st.pop();
        int upper_r = r;
        int lower_r = r;
        int left_c = c;
        int right_c = c;
        while(upper_r-1 >= 0)
        {
            matrix[upper_r-1][c] = 0;
            upper_r--;
        }
        while(lower_r+1 < m)
        {
            matrix[lower_r+1][c] = 0;
            lower_r++;
        }
        while(left_c-1 >= 0)
        {
            matrix[r][left_c-1] = 0;
            left_c--;
        }
        while(right_c+1 < n)
        {
            matrix[r][right_c+1] = 0;
            right_c++;
        }
    }
}
