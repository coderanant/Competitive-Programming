class Solution {
public:
    int nextGreaterElement(int n) {
        vector<int> num;
        int temp = n;
        while(n)
        {
            num.push_back(n % 10);
            n/=10;
        }
        reverse(num.begin(), num.end());
        next_permutation(num.begin(), num.end());
        long long ans = 0;
        for(int i = 0; i < num.size(); i++)
        {
            ans *= 10;
            ans += num[i];
        }
        if(ans <= temp || ans > INT_MAX)
            return -1;
        return ans;
    }
};