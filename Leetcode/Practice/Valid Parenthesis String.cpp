class Solution {
public:
    bool checkValidString(string s) {
        int low = 0, high = 0;
        for(auto i : s)
        {
            if(i == ')')
            {
                low--;
                high--;
            }
            else if(i == '(')
            {
                low++;
                high++;
            }
            else
            {
                low--;
                high++;
            }
            low = max(0, low);
            if(high < 0)
                return false;
        }
        if(low == 0)
            return true;
        return false;
    }
};