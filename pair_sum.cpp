#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    vector<vector<int>>ans;  // here first create the ans variable which store the sum 
 
    for(int i = 0; i<arr.size(); i++){
        for(int j = i+1; j<arr.size(); j++){
            if(arr[i] +arr[j] == s){
                vector<int>temp; 
                temp.push_back(min(arr[i], arr[j]));  // this will store the minimum of arr[i] and arr[j]
                
                temp.push_back(max(arr[i], arr[j]));  // this will store the maximum of arr[j] and arr[i]
                
                ans.push_back(temp); 
            }
        }
    }
    sort(ans.begin(), ans.end()); 
    return ans;
}
