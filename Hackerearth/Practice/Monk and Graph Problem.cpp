/*coderanant*/
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define f1(i,a,b) for(i=a;i<b;i++)
#define f2(i,a,b) for(i=a;i>=b;i--)
#define endl '\n'
#define pb push_back
#define gp " "
#define ff first
#define ss second
#define mp make_pair

const int mod=1000000007;
ll temp;

vector<int> edge[100001];
int vis[100001];

void dfs(int node, int cc)
{
	if(vis[node]==0)
	{
		vis[node]=cc;
		int i;
		f1(i,0,edge[node].size())
		{
			dfs(edge[node][i],temp);
		}
	}
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    	freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    	freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    #endif

    int n,m;
    cin>>n>>m;
    int i;
    f1(i,0,m)
    {
    	int a,b;
    	cin>>a>>b;
    	edge[a].pb(b);
    	edge[b].pb(a);
    }

    temp=1;
    f1(i,1,n+1)
    {
    	if(vis[i]==0)
    	{
    		dfs(i,temp);
    		temp++;
    	}
    }

    int count[n+1];
    memset(count,0,sizeof(count));
    f1(i,1,n+1)
    {
    	count[vis[i]]+=edge[i].size();
    }
    int ans=0;
    f1(i,1,n+1)
    ans=max(ans,count[i]);
    cout<<ans/2<<endl;
    return 0;
}