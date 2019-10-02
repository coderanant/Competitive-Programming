/*coderanant*/
#include <bits/stdc++.h>
using namespace std;

#define int long long
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

int n;
int arr[31][31];
int vis[31][31];
int ans=mod;

void dfs(int x, int y, int dep)
{
	if(x<1||y<1||x>n||y>n)
	{
		return ;
	}
	if(arr[x][y]==1||vis[x][y]==1)
	{
		return ;
	}
	if(arr[x][y]==2)
	{
		ans=min(ans,dep);
		return ;
	}
	vis[x][y]=1;
	dfs(x+1,y,dep+1);
	dfs(x-1,y,dep+1);
	dfs(x,y+1,dep+1);
	dfs(x,y-1,dep+1);
	vis[x][y]=0;
	return ;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    	freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    	freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    #endif
    cin>>n;

    memset(vis,0,sizeof(vis));
    int x,y;
    f1(i,1,n+1)
    {
    	f1(j,1,n+1)
    	{
    		char temp;
    		cin>>temp;
    		if(temp=='S')
    		{
    			x=i,y=j;
    			arr[i][j]=0;
    		}
    		else if(temp=='P')
    			arr[i][j]=0;
    		else if(temp=='T')
    			arr[i][j]=1;
    		else
    			arr[i][j]=2;
    	}
    }
    dfs(x,y,0ll);
    cout<<ans;
    return 0;
}