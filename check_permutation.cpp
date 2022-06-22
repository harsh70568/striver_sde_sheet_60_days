#include<bits/stdc++.h>
bool areAnagram(string &str1, string &str2){
    // Write your code here.
    int n = str1.length();
    int m = str2.length();
    if(n != m) return 0;
    unordered_map<char,int> mpp;
    for(int i = 0; i < str1.length(); i++)
    {
        mpp[str1[i]]++;
    }
    
    for(int i = 0; i < str2.length(); i++)
    {
        if(mpp.find(str2[i]) != mpp.end())
        {
            mpp[str2[i]]--;
        }
        else
        {
            return false;
        }
    }
    return true;
}
