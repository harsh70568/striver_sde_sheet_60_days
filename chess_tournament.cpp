bool is_possible(vector<int> positions, int n, int c, int mid)
{
    int count = 1;
    int pos = positions[0];
    
    for(int i = 1; i < n; i++)
    {
        if(positions[i] - pos >= mid)
        {
            count++;
            if(count == c)
            {
                return true;
            }
            pos = positions[i];
        }
    }
    return false;
}
int chessTournament(vector<int> positions , int n ,  int c){
	// Write your code here
    sort(positions.begin(),positions.end());
    int start = 0;
    int maxi = -1;
    for(auto it : positions)
    {
        maxi = max(maxi,it);
    }
    int end = maxi;
    int ans = -1;
    while(start <= end)
    {
        int mid = (start+end)/2;
        if(is_possible(positions,n,c,mid))
        {
            ans = mid;
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
    }
    return ans;
}
