class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        if(intervals.size() == 0)
            return ans;
        int l = intervals[0][0], r = intervals[0][1];
        for(int i = 1; i < intervals.size(); i++)
        {
            if(intervals[i][0] <= r)
            {
                r = max(r, intervals[i][1]);
            }
            else
            {
                vector<int> temp;
                temp.push_back(l); temp.push_back(r);
                ans.push_back(temp);
                l = intervals[i][0];
                r = intervals[i][1];
            }
        }
        vector<int> temp;
        temp.push_back(l); temp.push_back(r);
        ans.push_back(temp);
        return ans;
    }
};