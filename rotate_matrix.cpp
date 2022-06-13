#include <bits/stdc++.h> 

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
    int left = 0;
    int right = m-1;
    int top = 0;
    int bottom = n-1;
    while(left < right && top < bottom)
    {
        int temp = mat[top][top];
        for(int i = left+1; i <= right; i++)
        {
            swap(temp,mat[top][i]);
        }
        
        for(int i = top+1; i <= bottom; i++){
            swap(temp,mat[i][right]);
        }
        
        for(int i = right-1; i >= left; i--)
        {
            swap(temp,mat[bottom][i]);
        }
        
        for(int i = bottom-1; i >= top; i--)
        {
            swap(temp,mat[i][left]);
        }
        left++;
        right--;
        top++;
        bottom--;
    }

}
