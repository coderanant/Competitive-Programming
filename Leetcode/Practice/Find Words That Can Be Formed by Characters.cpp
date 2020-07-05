class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans = 0;
        int arr[26];
        memset(arr, 0, sizeof(arr));
        for(int i = 0; i < chars.size(); i++)
            arr[chars[i] - 'a']++;
        
        for(int i = 0; i < words.size(); i++)
        {
            vector<int> temp(26, 0);
            for(int j = 0; j < words[i].size(); j++)
            {
                temp[words[i][j] - 'a']++;
            }
            int no = 0;
            for(int j = 0; j < 26; j++)
                if(temp[j] > arr[j])
                    no = 1;
            if(!no)
                ans += words[i].size();
        }
        return ans;
    }
};