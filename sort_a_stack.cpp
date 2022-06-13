void solve(stack<int> &stack, int num)
{
    if(stack.empty() || num > stack.top())
    {
        stack.push(num);
        return;
    }
    int top1 = stack.top();
    stack.pop();
    solve(stack,num);
    stack.push(top1);
}
void sortStack(stack<int> &stack)
{
	// Write your code here
    if(stack.empty()) return;
    int temp = stack.top();
    stack.pop();
    sortStack(stack);
    solve(stack,temp);
    
}
