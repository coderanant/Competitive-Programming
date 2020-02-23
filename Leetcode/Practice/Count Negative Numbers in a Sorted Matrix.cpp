#define ll long long
#define f1(i,a,b) for(int i=a;i<b;i++)
#define f2(i,a,b) for(int i=a;i>=b;i--)
#define endl '\n'
#define pb push_back
#define gp " "
#define ff first
#define ss second
#define mp make_pair
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        int ans=0;
        f1(i,0,n)
        {
        	f1(j,0,m)
        	{
        		if(grid[i][j]<0)
        			ans++;
        	}
        }
        return ans;
    }
};