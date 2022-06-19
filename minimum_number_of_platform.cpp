int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at,at+n);
    sort(dt,dt+n);
    
    int i = 1;
    int j = 0;
    int min_platform = 1;
    int max_platform = 1;
    while(i < n && j < n)
    {
        if(at[i] <= dt[j])
        {
            min_platform++;
            i++;
        }
        else
        {
            min_platform--;
            j++;
        }
        max_platform = max(max_platform,min_platform);
    }
    return max_platform;
    
}
