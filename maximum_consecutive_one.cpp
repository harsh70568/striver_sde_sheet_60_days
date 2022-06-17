int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    int ans = -1;
    int i = 0;
    int j = 0;
    int count = 0;
    while(j < n)
    {
        if(arr[j] == 0)
        {
            count++;
            while(count > k)
            {
                if(arr[i] == 0)
                {
                    count--;
                }
                i++;
            }
        }
        ans = max(ans,j-i+1);
        j++;
    }
    return ans;
}
