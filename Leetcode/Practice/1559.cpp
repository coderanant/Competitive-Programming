class Solution {
public:
    vector<vector<int>> ans;
    bool dfs(vector<vector<char>>& grid, int num, int i, int j, int n, int m, char cm)
    {
        if(i < 0 || j < 0 || i >= n || j >= m || grid[i][j] != cm)
            return false;
        if(ans[i][j] != 0)
        {
            if(num - ans[i][j] >= 4)
                return true;
            else return false;
        }
        ans[i][j] = num;
        bool tum = false;
        tum |= dfs(grid, num + 1, i + 1, j, n, m, cm); 
        tum |= dfs(grid, num + 1, i, j + 1, n, m, cm);
        tum |= dfs(grid, num + 1, i - 1, j, n, m, cm);
        tum |= dfs(grid, num + 1, i, j - 1, n, m, cm);
        return tum;
    }
    bool containsCycle(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size();
        for(int i = 0; i < n; i++)
        {
            vector<int> temp(m, 0);
            ans.push_back(temp);
        }
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(ans[i][j] == 0)
                {
                    if(dfs(grid, 1, i, j, n, m, grid[i][j]) == true)
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};