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
int i,j;
ll temp;

int level[100001];

void bfs(vector<vector<int>> edges, int n)
{
	int vis[n+1];
	memset(vis,0,sizeof(vis));
	queue<int> que;
	que.push(1);
	level[1]=1;
	vis[1]=1;
	while(!que.empty())
	{
		int node = que.front();
		que.pop();
		f1(i,0,edges[node].size())
		{
			if(vis[edges[node][i]]==0)
			{
				que.push(edges[node][i]);
				vis[edges[node][i]]=1;
				level[edges[node][i]]=level[node]+1;
			}
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
    int n;
    cin>>n;
    vector<vector<int>> edges(n+1);
    f1(i,0,n-1)
    {
    	int a,b;
    	cin>>a>>b;
    	//cout<<a<<gp<<b<<endl;
    	edges[a].pb(b);
    	edges[b].pb(a);
    }
    //cout<<endl;
    bfs(edges, n);
    int ans[n+1];
    memset(ans,0,sizeof(ans));
    f1(i,0,100001)
    {
    	if(level[i]!=0)
    	{
    		//cout<<i<<gp<<level[i]<<endl;
    		ans[level[i]]++;
    	}
    }
    int k;
    cin>>k;
    cout<<ans[k];
    return 0;
}