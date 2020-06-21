class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
            sum += nums[i];
        vector<int> ans;
        int temp = 0;
        for(int i = nums.size() - 1; i >= 0; i--)
        {
            temp += nums[i];
            sum -= nums[i];
            ans.push_back(nums[i]);
            if(temp > sum)
                break;
        }
        return ans;
    }
};