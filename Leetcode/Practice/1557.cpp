class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> ans(n, 1);
        for(int i = 0; i < edges.size(); i++)
        {
                ans[edges[i][1]] = 0;
        }
        vector<int> final;
        for(int i = 0; i < n; i++)
        {
            if(ans[i])
                final.push_back(i);
        }
        return final;
    }
};