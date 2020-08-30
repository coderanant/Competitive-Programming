class Solution {
public:
     void dfs(vector<vector<int>>& grid, int i, int j)
    {
        int n = grid.size(), m = grid[0].size();
        if(i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == 0)
            return ;
        grid[i][j] = 0;
        int d1[] = {0, 1, 0, -1}, d2[] = {1, 0, -1, 0};
        for(int k = 0; k < 4; k++)
            dfs(grid, i + d1[k], j + d2[k]);
         return ;
    }
    bool isConn(vector<vector<int>> grid) {
        if(grid.size() == 0)
            return false;
        int n = grid.size(), m = grid[0].size();
        int flag = false;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(grid[i][j] == 1)
                {
                    if(flag == false)
                    {
                        dfs(grid, i, j);
                        flag = true;
                    }
                    else
                        return false;
                }
            }
        }
        if(flag == false)
            return false;
        return true;
    }
    int minDays(vector<vector<int>>& grid) {
        if(grid.size() == 0)
            return true;
        int n = grid.size(), m = grid[0].size();
        if(isConn(grid) == false)
            return 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(grid[i][j] == 1)
                {
                    grid[i][j] = 0;
                    if(isConn(grid) == false)
                        return 1;
                    grid[i][j] = 1;
                }
            }
        }
        return 2;
    }
};