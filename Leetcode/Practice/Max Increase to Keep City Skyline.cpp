/*coderanant*/
#define ll long long
#define f1(i,a,b) for(int i=a;i<b;i++)
#define f2(i,a,b) for(int i=a;i>=b;i--)
#define endl '\n'
#define pb push_back
#define gp " "
#define ff first
#define ss second
#define mp make_pair

const int mod=1000000007;
ll temp;
class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int row[n],col[n];
        memset(row, 0, sizeof(row));
        memset(col, 0, sizeof(col));
        f1(i,0,n)
        {
        	f1(j,0,n)
        	{
        			row[i] = max(grid[i][j], row[i]);
        			col[j] = max(grid[i][j], col[j]);
        	}
        }
        int ans = 0;
        f1(i,0,n)
        {
        	f1(j,0,n)
        	{
        		ans+=(min(row[i],col[j]) - grid[i][j]);
        	}
        }
        return ans;
    }
};