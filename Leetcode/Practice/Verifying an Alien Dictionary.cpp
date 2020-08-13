class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int dict[26];
        memset(dict, 0, sizeof dict);
        
        for(int i = 0; i < 26; i++)
            dict[order[i] - 'a'] = i;
        for(int i = 1; i < words.size(); i++)
        {
            int index = 0;
            while(index < words[i].size() and index < words[i - 1].size())
            {
                if(dict[words[i][index] - 'a'] < dict[words[i - 1][index] - 'a'])
                    return false;
                else if(dict[words[i - 1][index] - 'a'] < dict[words[i][index] - 'a'])
                    break;
                index++;
            }
            if(index == min(words[i].size(), words[i - 1].size()) and words[i].size() < words[i - 1].size())
                return false;
        }
        return true;
    }
};