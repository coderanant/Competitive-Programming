class Solution {
public:
    bool check(vector<vector<int>>& grid, int i, int j)
    {
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == 0)
            return true;
        return false;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        if(grid.size() == 0)
            return 0;
        int ans = 0;
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[0].size(); j++)
            {
                if(grid[i][j] == 1)
                {
                    if(check(grid, i - 1, j)) ans++;
                    if(check(grid, i + 1, j)) ans++;
                    if(check(grid, i, j - 1)) ans++;
                    if(check(grid, i, j + 1)) ans++;
                }
            }
        }
        return ans;
    }
};