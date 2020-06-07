class Solution {
public:
    vector<int> diStringMatch(string S) {
        int i = 0, j = S.size();
        vector<int> ans;
        for(char ch : S)
        {
            if(ch == 'I')
            {
                ans.push_back(i);
                i++;
            }
            else
            {
                ans.push_back(j);
                j--;
            }
        }
        ans.push_back(i);
        return ans;
    }
};