#include <bits/stdc++.h> 
long long merge(long long *arr, long long l, long long m, long long r)
{
         long long n1 = m-l+1, n2 = r-m;
         long long left[n1], right[n2];
         for(long long i = 0; i < n1; i++)
            left[i] = arr[l+i];
         for(long long i = 0; i < n2; i++)
            right[i] = arr[m+i+1];
        
        int i = 0, j = 0, k = l;
    long long res = 0;
        while(i < n1 && j < n2)
        {
          if(left[i]>right[j])
          {
              res+=(n1-i);
              arr[k++] = right[j++];
          }
            else{
                arr[k++] = left[i++];
            }
        }
        while(i < n1)
        {
            arr[k++] = left[i++];
        }
        while(j < n2)
        {
            arr[k++] = right[j++];
        }
    return res;
    }
long long solve(long long *arr, long long l, long long r)
{
    long long res = 0;
    if(l<r){
            long long m = (l+r)/2;
            res+=solve(arr, l, m);
            res+=solve(arr, m+1, r);
            res+=merge(arr, l, m, r);
    }
    return res;
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    long long res = solve(arr, 0, n-1);
    return res;
}
