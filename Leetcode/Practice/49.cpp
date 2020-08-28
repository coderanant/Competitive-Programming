class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<vector<int>, int> mp;
        for(int i = 0; i < strs.size(); i++)
        {
            vector<int> arr(26, 0);
            for(int j = 0; j < strs[i].size(); j++)
                arr[strs[i][j] - 'a']++;
            if(mp.count(arr) != 0)
                ans[mp[arr]].push_back(strs[i]);
            else 
            {
                mp[arr] = ans.size();
                vector<string> temp;
                temp.push_back(strs[i]);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};