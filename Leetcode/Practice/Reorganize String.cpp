class Solution {
public:
    string reorganizeString(string S) {
        sort(S.begin(), S.end());
        vector<pair<int,char>> temp;
        char th = S[0];
        int count = 1;
        for(int i = 1; i < S.size(); i++)
        {
            if(S[i] != S[i - 1])
            {
                temp.push_back({count, th});
                count = 0;
                th = S[i];
            }
            count++;
        }
        temp.push_back({count, th});
        string ans;
        for(int i = 0; i < S.size(); i++)
            ans += '/';
        sort(temp.begin(), temp.end());
        if(temp[temp.size() - 1].first > (S.size() + 1) / 2)
            return "";
        int ed = temp.size() - 1;
        for(int i = 0; i < ans.size(); i++)
        {
            ans[i] = temp[ed].second;
            if(--temp[ed].first == 0)
                ed--;
            i++;
        }
        for(int i = 1; i < ans.size(); i++)
        {
            ans[i] = temp[ed].second;
            if(--temp[ed].first == 0)
                ed--;
            i++;
        }
        return ans;
    }
};