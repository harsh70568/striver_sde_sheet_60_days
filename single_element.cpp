int uniqueElement(vector<int> arr, int n)
{
	// Write your code here
  // property used - XOR of two same element gives me 0 as result, sigle element will remain as it is in my answer.
    int do_xor = 0;
    for(int i = 0; i < n; i++)
    {
        do_xor ^= arr[i];
    }
    return do_xor;
}
