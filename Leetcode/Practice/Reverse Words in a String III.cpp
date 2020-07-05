class Solution {
public:
    string reverseWords(string s) {
        string ans, curr;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ' ')
            {
                reverse(curr.begin(), curr.end());
                ans += curr;
                ans += ' ';
                curr.clear();
            }
            else curr += s[i];
        }
        reverse(curr.begin(), curr.end());
        ans += curr;
        return ans;
    }
};