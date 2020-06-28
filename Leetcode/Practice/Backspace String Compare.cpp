class Solution {
public:
    bool backspaceCompare(string S, string T) {
        string a, b;
        for(int i = 0; i < S.size(); i++)
        {
            if(S[i] == '#')
            {
                if(!a.empty())
                a.pop_back();
            }
            else
                a.push_back(S[i]);
        }
        for(int i = 0; i < T.size(); i++)
        {
            if(T[i] == '#')
            {
                if(!b.empty())
                    b.pop_back();
            }
            else
                b.push_back(T[i]);
        }
        return a == b;
    }
};