#include<bits/stdc++.h>

// logic ---->  if any value comes which is greater then its left then we have to check in its left until a value greater than that value comes.
vector<int> findSpans(vector<int> &price) {
    // Write your code here.
    vector<int> ans;
    ans.push_back(1);
    stack<int> st;
    st.push(0);
    for(int i = 1; i < price.size(); i++)
    {
        while(!st.empty() && price[st.top()] <= price[i])
        {
            st.pop();
        }
        int span = st.empty() ? i+1: i-st.top();
        ans.push_back(span);
        st.push(i);
    }
    return ans;
}
