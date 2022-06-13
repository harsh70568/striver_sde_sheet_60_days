#include<bits/stdc++.h>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    vector<int> ans;
    stack<int> st;
    st.push(arr[n-1]);
    ans.push_back(-1);
    for(int i = n-2; i >= 0; i--)
    {
        if(arr[i] > st.top())
        {
            ans.push_back(st.top());
        }
        else
        {
            while(!st.empty() && arr[i] <= st.top())
            {
                st.pop();
            }
            int next = st.empty() ? -1 : st.top();
            ans.push_back(next);
        }
        st.push(arr[i]);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
