class Solution {
public:
    int myAtoi(string str) {
        long long ans = 0;
        int flag = 0, neg = 0;
        for(int i = 0; i < str.size(); i++)
        {
            if(flag == 0)
            {
                if(str[i] == '-')
                {
                    neg = 1;
                    flag = 1;
                }
                else if(str[i] == '+')
                    flag = 1;
                else if(str[i] >= '0' and str[i] <= '9')
                {
                    ans += str[i] - '0';
                    flag = 1;
                }
                else if(str[i] != ' ')
                    return 0;
            }
            else if(flag == 1)
            {
                if(str[i] < '0' || str[i] > '9')
                    break;
                if(ans * 10 > INT_MAX)
                {
                    if(neg) return INT_MIN;
                    return INT_MAX;
                }
                ans *= 10;
                ans += str[i] - '0';
            }
        }
        if(neg)
            ans *= -1;
        if(ans > INT_MAX)
            return INT_MAX;
        if(ans < INT_MIN)
            return INT_MIN;
        return ans;
    }
};