bool isValidParenthesis(string expression)
{
    // Write your code here.
    stack<char> st;
    for(int i = 0; i < expression.size(); i++)
    {
        if(expression[i] == '(' ||  expression[i] == '{' ||  expression[i] == '[')
        {
            st.push(expression[i]);
        }
        else
        {
            if(st.empty()) return false;
            if((st.top() == '(' && expression[i] == ')') || (st.top() == '{' && expression[i] == '}') || (st.top() == '[' && expression[i] == ']'))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    if(st.empty()) return true;
    else return false;
}
