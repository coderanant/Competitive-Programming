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
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        vector<vector<int>> ans;
        int row[n],col[m];
        memset(row,0,sizeof(row));
        memset(col,0,sizeof(col));

        f1(i,0,indices.size())
        {
        	row[indices[i][0]]++;
        	col[indices[i][1]]++;
        }
        int an=0;
        int oddrow=0;
        f1(i,0,n)
        {
        	if(row[i]%2==1)
        	{
        		oddrow++;
        		an+=m;
        	}
        }
        f1(i,0,m)
        {
        	if(col[i]%2==1)
        	{
        		an-=oddrow;
        		an+=(n-oddrow);
        	}
        }
        return an;
    }
};