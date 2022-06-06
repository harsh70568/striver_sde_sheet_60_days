#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    for(int i = 0; i < n; i++)
    {
        int req_sum = K-arr[i];    // fixinf our a, so equation now becomes b+c = k-a;
        int left = i+1;
        int right = n-1;
        while(left < right)   // two pointer approach
        {
            if(arr[left] + arr[right] < req_sum)
            {
                left++;
            }
            else if(arr[left] + arr[right] > req_sum)
            {
                right--;
            }
            else   // found triplet
            {
                vector<int> temp(3);
                temp[0] = arr[i];
                temp[1] = arr[left];
                temp[2] = arr[right];
                ans.push_back(temp);
                while(left < right && arr[left] == temp[1])   // taking care of duplicates
                {
                    left++;
                }
                while(left < right && arr[right] == temp[2])
                {
                    right--;
                }
            }
            while(i < n && arr[i+1] == arr[i])
            {
                i++;
            }
        }
    }
    return ans;
}
