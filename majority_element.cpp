#include <bits/stdc++.h>  

// Moore's voting algorithm

int findMajorityElement(int arr[], int n) {
	// Write your code here.
    
    int element = 0;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(count == 0)
        {
            element = arr[i];
        }
        if(element == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    
    count = 0;
    for(int i = 0; i < n; i++)
    {
        if(element == arr[i])
        {
            count++;
        }
    }
    if(count > n/2)
    {
        return element;
    }
    return -1;
}
