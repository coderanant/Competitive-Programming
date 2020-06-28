class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = 0;
        for(int i = 0; i < candies.size(); i++) 
            maxi = max(maxi, candies[i]);
        
        vector<bool> ans(candies.size());
        for(int i = 0; i < candies.size(); i++)
        {
            if(candies[i] + extraCandies >= maxi)
                ans[i] = true;
            else
                ans[i] = false;
        }
        return ans;
    }
};