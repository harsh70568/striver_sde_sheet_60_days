#include<bits/stdc++.h>
bool check(string str)
{
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] != ' ')
        {
            return true;
        }
    }
    return false;
}
string reverseString(string str)
{
    // Write your code here.
    string s = "";
    string ans = "";
    int i = str.length()-1;
    while(i >= 0)
    {
        if(str[i] == ' ' && check(s))
        {
            reverse(s.begin(),s.end());
            ans.append(s);
            ans.append(" ");
            s = "";
        }
        else if(str[i] != ' ')
        {
            s += str[i];
        }
        i--;
    }
    if(str[0] == ' ') ans.pop_back();
    else
    {
        reverse(s.begin(),s.end());
        ans.append(s);
    }
    return ans;
}
