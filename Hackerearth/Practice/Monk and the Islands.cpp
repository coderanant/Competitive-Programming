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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    	freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    	freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--)
    {
    	int n,m;
    	cin>>n>>m;
    	int vis[n+1];
    	memset(vis,-1,sizeof(vis));
    	vector<int> v[n+1];
    	f1(i,0,m)
    	{
    		int a,b;
    		cin>>a>>b;
    		v[a].pb(b);
    		v[b].pb(a);
    	}
    	queue<int> q;
    	q.push(1);
    	vis[1]=0;
    	while(!q.empty())
    	{
    		int node=q.front();
    		q.pop();
    		f1(i,0,v[node].size())
    		{
    			if(vis[v[node][i]]==-1)
    			{
    				q.push(v[node][i]);
    				vis[v[node][i]]=vis[node]+1;
    			}
    		}
    	}
    	cout<<vis[n]<<endl;
    }
    return 0;
}