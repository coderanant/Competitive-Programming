class Solution {
public:
    void dfs(vector<vector<char>>& board, vector<vector<char>>& ans, int i, int j)
    {
        int n = board.size(), m = 0;
        if(n) m = board[0].size();
        if(i < 0 || j < 0 || i >= n || j >= m || ans[i][j] == 'X' || board[i][j] == 'O')
            return ;
        board[i][j] = 'O';
        dfs(board, ans, i - 1, j);
        dfs(board, ans, i + 1, j);
        dfs(board, ans, i, j - 1);
        dfs(board, ans, i, j + 1);
    }
    void solve(vector<vector<char>>& board) {
        vector<vector<char>> ans(board);
        int n = board.size(), m = 0;
        if(n) m = board[0].size();
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
                board[i][j] = 'X';
        }
        for(int i = 0; i < m; i++)
        {
            if(ans[0][i] == 'O')
                dfs(board, ans, 0, i);
            if(ans[n - 1][i] == 'O')
                dfs(board, ans, n - 1 ,i);
        }
        for(int i = 0; i < n; i++)
        {
            if(ans[i][0] == 'O')
                dfs(board, ans, i, 0);
            if(ans[i][m - 1] == 'O')
                dfs(board, ans, i ,m - 1);
        }
    }
};