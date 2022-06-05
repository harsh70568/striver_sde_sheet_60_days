int search(int* arr, int n, int key) {
    // Write your code here.
    int low = 0;
    int high = n-1;
    while(low <= high)
    {
        int mid = (low+high)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        
        if(arr[low] <= arr[mid])  // left part is sorted, so that binary search can applied to it.
        {
            if(arr[low] <= key && arr[mid] >= key)   // element whether comes in range or not
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        else // right part is sorted
        {
            if(arr[mid] <= key && arr[high] >= key)
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
    }
    return -1;
}
