#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int missing = 0;
    int repeating = 0;
    int curr_sum = 0;
    
    for(int i = 0; i < n; i++)
    {
        int ori_elem = abs(arr[i]);
        int index = ori_elem-1;
        
        if(arr[index] < 0)
        {
            repeating = ori_elem;
        }
        arr[index] = -arr[index];
        curr_sum += ori_elem; 
    }
    
    missing = n*(n+1)/2 - (curr_sum - repeating);
    return {missing,repeating};
}
