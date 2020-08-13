class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans;
        int i = num1.size() - 1, j = num2.size() - 1;
        int carry = 0;
        while(i >= 0 or j >= 0)
        {
            int res = carry;
            if(i >= 0) res += num1[i] - '0';
            if(j >= 0) res += num2[j] - '0';
            ans += (res % 10 + '0');
            carry = res / 10;
            i--; j--;
        }
        while(carry)
        {
            ans += (carry % 10 + '0');
            carry /= 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};