int arr[] = {1,2,5,10,20,50,100,500,1000};
int findMinimumCoins(int amount) 
{
    // Write your code here
    
    int coins = 0;
    for(int i = 8; i >= 0; i--)
    {
        while(amount >= arr[i])
        {
            amount -= arr[i];
            coins++;
        }
    }
    return coins;
}
