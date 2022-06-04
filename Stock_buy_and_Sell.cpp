int maximumProfit(vector<int> &prices){
    // Write your code here.
    int max_profit = INT_MIN;;
    int min_price = INT_MAX;
    
    for(int i = 0; i < prices.size(); i++)
    {
        if(prices[i] < min_price)
        {
            min_price = prices[i];
        }
        max_profit = max(max_profit,prices[i]-min_price); // calculating maximum profit at each step
    }
    return max_profit;
}
