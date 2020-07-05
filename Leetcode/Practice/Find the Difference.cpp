class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans = 0;
        for(char i : s)
            ans ^= i;
        for(char i : t)
            ans ^= i;
        return ans;
    }
};