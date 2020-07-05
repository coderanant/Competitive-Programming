class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        vector<int> arr(S.size());
        for(int i = 0; i < S.size(); i++)
            arr[i] = 100000;
        int cur = 100000;
        for(int i = 0; i < S.size(); i++)
        {
            if(S[i] == C) cur = 0;
            arr[i] = min(arr[i], cur);
            cur++;
        }
        cur = 100000;
        for(int i = S.size() - 1; i >= 0; i--)
        {
            if(S[i] == C) cur = 0;
            arr[i] = min(arr[i], cur);
            cur++;
        }
        return arr;
    }
};