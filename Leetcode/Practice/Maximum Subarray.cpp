class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN, curr = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            curr += nums[i];
            ans = max(ans, curr);
            curr = max(curr, 0);
        }
        return ans;
    }
};