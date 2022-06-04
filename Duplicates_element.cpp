#include <bits/stdc++.h> 


int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    int slow = arr[0];
    int fast = arr[0];
    do
    {
        slow = arr[slow];  // moving my slow pointer by 1
        fast = arr[arr[fast]];  // moving my fast pointer by 2, until they become equals
    }while(slow != fast);
    
    slow = arr[0];
    while(slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}
