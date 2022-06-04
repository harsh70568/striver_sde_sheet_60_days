
long long maxSubarraySum(int arr[], int n)
{
    
    long long curr_sum = 0;
    long long max_sum = 0;    
    for(int i = 0; i < n; i++)
    {
        curr_sum += arr[i];   // adding everytime the value of current element.
        if(curr_sum > max_sum)    // if at any point my current sum get max then my maximum sum, i will update my maximum sum 
        {
            max_sum = curr_sum;
        }
        if(curr_sum < 0)   // if at any point my current sum becomes negative i will not intrested in taking subarray till, so gives current sum a fresh start.
        {
            curr_sum = 0;
        }
    }
    return max_sum;
}
