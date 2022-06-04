#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    // Write your code here.
    long l_max[n];
    long r_max[n];
    l_max[0] = arr[0];
    r_max[n-1] = arr[n-1];
    for(int i = 1; i < n; i++)
    {
        l_max[i] = max(l_max[i-1],arr[i]);
    }
    for(int i = n-2; i >= 0; i--)
    {
        r_max[i] = max(r_max[i+1],arr[i]);
    }
    
    long water = 0;
    for(int i = 1; i < n-1; i++)
    {
        water += min(l_max[i],r_max[i]) - arr[i];
    }
    return water;
}
