class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n==0||n==1)
            return 0;
        int maxn=prices[n-1],ans=0;
        for(int i=n-2;i>=0;i--)
        {
            if(prices[i]>maxn)
                maxn=prices[i];
            else
            {
                ans=max(ans,maxn-prices[i]);
            }
        }
        return ans;
    }
};