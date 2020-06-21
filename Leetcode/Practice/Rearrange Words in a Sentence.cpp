class Solution {
public:
    string arrangeWords(string text) {
        vector<pair<string, int>> words;
        string temp;
        for(int i = 0; i < text.size(); i++)
        {
            if(text[i] == ' ')
            {
                words.push_back({temp, i});
                temp.clear();
            }
            else
                temp.push_back(tolower(text[i])); 
        }
        if(text[text.size() - 1] != ' ')
            words.push_back({temp, text.size()});
        sort(words.begin(), words.end(), [] (const auto &a, const auto &b ) {
            return  (a.first.size() < b.first.size() || (a.first.size() == b.first.size() && a.second < b.second));
        });
        string ans;
        for(int i = 0; i < words.size(); i++)
        {
            ans+=words[i].first;
            if(i != words.size() - 1)
                ans += " ";
        }
        ans[0] = ans[0] - 'a' + 'A';
        return ans;
    }
};