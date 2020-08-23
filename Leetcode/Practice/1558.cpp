class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0;
        while(1)
        {
            int flag = 1;
            for(int i = 0; i < nums.size(); i++)
            {
                if(nums[i] >= 2)
                    flag = 0;
                ans += nums[i] % 2;
                nums[i] /= 2;
            }
            if(flag)
                break;
            ans++;
        }
        return ans;
    }
};