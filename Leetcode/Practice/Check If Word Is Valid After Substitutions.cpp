class Solution {
public:
    bool isValid(string S) {
        vector<char> tem;
        for(int i = 0; i < S.size(); i++)
        {
            tem.push_back(S[i]);
            if(tem.size() > 2)
            {
                int n = tem.size();
                if(tem[n - 1] == 'c' && tem[n - 2] == 'b' && tem[n - 3] == 'a')
                {
                    tem.pop_back();
                    tem.pop_back();
                    tem.pop_back();
                }
            }
        }
        if(tem.size() == 0)
            return true;
        return false;
    }
};