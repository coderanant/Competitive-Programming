class Solution {
public:
    vector<int> arr = vector(1000000, 0);
    int coinChange(vector<int>& coins, int amount) {
        if(amount < 0)
            return -1;
        else if(amount == 0)
            return 0;
        else if(arr[amount] != 0)
            return arr[amount];
        int ans = 10000000;
        for(int i = 0; i < coins.size(); i++)
        {
            int temp = coinChange(coins, amount - coins[i]);
            if(temp != -1)
            ans = min(ans, temp + 1);
        }
        if(ans > amount)
            return arr[amount] = -1;
        return arr[amount] = ans;
    }
};