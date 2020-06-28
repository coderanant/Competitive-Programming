class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        string push = "Push", pop = "Pop";
        vector<string> ans;
        for(int j = 1; j < target[0]; j++)
        {
            ans.push_back(push);
            ans.push_back(pop);
        }
        for(int i = 1; i < target.size(); i++)
        {
            ans.push_back(push);
            for(int j = 0; j < target[i] - target[i - 1] - 1; j++)
            {
                ans.push_back(push);
                ans.push_back(pop);
            }
        }
        ans.push_back(push);
        return ans;
    }
};