class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> h(heights.begin(),heights.end());
        sort(heights.begin(),heights.end());
        int ans=0;
        for(int i=0;i<heights.size();i++)
        {
            if(heights[i]!=h[i])
                ans++;
        }
        return ans;
    }
};