class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        int base[26];
        memset(base, 0, sizeof base);
        for(int i = 0; i < A[0].size(); i++)
            base[A[0][i] - 'a']++;
        for(int i = 1; i < A.size(); i++)
        {
            int temp[26];
            memset(temp, 0, sizeof temp);
            for(int j = 0; j < A[i].size(); j++)
            {
                temp[A[i][j] - 'a']++;
            }
            for(int j = 0; j < 26; j++)
            {
                base[j] = min(base[j], temp[j]);
            }
        }
        vector<string> ans;
        for(int i = 0; i < 26; i++)
        {
            for(int j = 0; j < base[i]; j++)
            {
                string temp;
                temp += char(i + 'a');
                ans.push_back(temp);
            }
        }
        return ans;
    }
};