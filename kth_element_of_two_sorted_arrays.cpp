#include<bits/stdc++.h>
int ninjaAndLadoos(vector<int> &row1, vector<int> &row2, int n, int m, int k) {
    // Write your code here.
    if(n > m) return ninjaAndLadoos(row2,row1,m,n,k);
    int start = max(0,k-m);
    int end = min(k,n);
    
    while(start <= end)
    {
        int mid1 = (start+end)/2;
        int mid2 = k - mid1;
        int l1 = (mid1 == 0) ? INT_MIN : row1[mid1-1];
        int l2 = (mid2 == 0) ? INT_MIN : row2[mid2-1];
        int r1 = (mid1 == n) ? INT_MAX : row1[mid1];
        int r2 = (mid2 == m) ? INT_MAX : row2[mid2];
        
        if((l1 <= r2) && (l2 <= r1))
        {
            return max(l1,l2);
        }
        else if(l1 > r2)
        {
            end = mid1-1;
        }
        else
        {
            start = mid1+1;
        }
    }
    return 1;
}
