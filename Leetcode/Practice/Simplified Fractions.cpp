class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> ans;
        set<string> ss;
        for(int i = 2; i <= n; i++)
        {
            for(int j = 1; j < i; j++)
            {
                string temp;
                int a = j, b = i;
                int k = __gcd(a, b);
                a /= k;
                b /= k;
                temp = to_string(a) + '/' + to_string(b);
                ss.insert(temp);
            }
        }
        for(auto i : ss)
            ans.push_back(i);
        return ans;
    }
};