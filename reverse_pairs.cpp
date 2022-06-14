#include <bits/stdc++.h> 

int merge(vector<int>&arr,int s,int e){
    int cnt=0;
    int mid=(s+e)/2;
    int i=s,j=mid+1;
    vector<int>temp;
    while(i<=mid && j<=e){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            int ub=upper_bound(arr.begin()+s,arr.begin()+mid+1,arr[j]*2)-arr.begin();
            cnt+=mid-ub+1;
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid) temp.push_back(arr[i++]);
    while(j<=e) temp.push_back(arr[j++]);
    for(int &i:temp) arr[s++]=i;
    return cnt;
}
int solve(vector<int>&arr,int s,int e){
    if(s>=e) return 0;
    int mid=(s+e)/2;
    int cnt=0;
    cnt+=solve(arr,s,mid);
    cnt+=solve(arr,mid+1,e);
    cnt+=merge(arr,s,e);
    return cnt;
}
int reversePairs(vector<int> &arr, int n)
{
    return solve(arr,0,n-1);
}
