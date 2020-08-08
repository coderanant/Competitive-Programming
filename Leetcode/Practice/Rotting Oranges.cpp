class Solution {
public:
    int n, m;
    int check(int i, int j)
    {
        if(i < 0 || j < 0 || i >= n || j >= m)
            return false;
        return true;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int ans = 0;
        queue<pair<int, int>> q;
        n = grid.size();
        m = grid[0].size();
        vector<vector<int>> arr(n, vector<int>(m, 10000000));
        
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[i].size(); j++)
            {
                if(grid[i][j] == 2)
                {
                    arr[i][j] = 0;
                    q.push({i, j});
                }
                else if(grid[i][j] == 0)
                    arr[i][j] = -1;
            }
        }
        
        while(!q.empty())
        {
            int i = q.front().first, j = q.front().second; q.pop();
            if(check(i - 1, j) && arr[i - 1][j] > arr[i][j])
            {
                arr[i - 1][j] = arr[i][j] + 1;
                q.push({i - 1, j});
            }
            if(check(i + 1, j) && arr[i + 1][j] > arr[i][j])
            {
                arr[i + 1][j] = arr[i][j] + 1;
                q.push({i + 1, j});
            }
            if(check(i, j - 1) && arr[i][j - 1] > arr[i][j])
            {
                arr[i][j - 1] = arr[i][j] + 1;
                q.push({i, j - 1});
            }
            if(check(i, j + 1) && arr[i][j + 1] > arr[i][j])
            {
                arr[i][j + 1] = arr[i][j] + 1;
                q.push({i, j + 1});
            }
        }
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[i].size(); j++)
            {
                if(grid[i][j] == 1 && arr[i][j] == 10000000)
                    return -1;
                ans = max(ans, arr[i][j]);
            }
        }
        return ans;
    }
};