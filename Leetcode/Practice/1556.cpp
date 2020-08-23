class Solution {
public:
    string thousandSeparator(int n) {
        string ans;
        int count = 0;
        if(n == 0)
            return "0";
        while(n)
        {
            if(count == 3)
            {
                ans += '.';
                count = 0;
            }
            ans += char((n % 10) + '0');
            n /= 10;
            count++;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};