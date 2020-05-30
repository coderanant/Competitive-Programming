class Solution {
public:
    int maxPower(string s) {
        int ans = 1, temp = 1;
        for(int i = 1; i < s.size(); i++)
        {
            if(s[i] == s[i - 1])
            temp++;
            else
                temp = 1;
            ans = max(ans, temp);
        }
        return ans;
    }
};