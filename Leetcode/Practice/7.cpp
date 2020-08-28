class Solution {
public:
    int reverse(int x) {
        long long ans = 0;
        while(x)
        {
            ans *= 10;
            ans += (x % 10);
            x /= 10;
        }
        if(ans < INT_MIN || ans > INT_MAX)
            ans = 0;
        return ans;
    }
};