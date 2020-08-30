class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int firs = n, count = 0, start = -1;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == 0)
            {
                firs = n;
                count = 0;
                start = i;
            }
            if(nums[i] < 0)
            {
                count++;
                firs = min(firs, i);
            }
            if(count % 2)
                ans = max(ans, i - firs);
            else
                ans = max(ans, i - start);

            cout<<i<<" "<<ans<<endl;
        }
        return ans;
    }
};