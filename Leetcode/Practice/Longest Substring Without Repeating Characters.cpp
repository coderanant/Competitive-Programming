class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        bool temp[256];
        memset(temp, false, sizeof temp);
        
        int st = 0, ans = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(temp[s[i]] == false)
            {
                temp[s[i]] = true;           
                ans = max(ans, i - st + 1);
            }
            else
            {
                for(int j = st; j < s.size(); j++)
                {
                    if(s[j] == s[i])
                    {
                        st = j + 1;
                        break;
                    }
                    temp[s[j]] = false;
                }
                ans = max(ans, i - st + 1);  
            }
        }
        return ans;
    }
};