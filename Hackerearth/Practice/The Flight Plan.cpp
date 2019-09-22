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

    int n,m,t,c;
    cin>>n>>m>>t>>c;

    vector<int> edges[n+1];
    f1(i,0,m)
    {
    	cin>>j>>temp;
    	edges[j].pb(temp);
    	edges[temp].pb(j);
    }

    int x,y;
    cin>>x>>y;

    int dist[n+1];
    int parent[n+1];
    memset(parent,-1,sizeof(parent));
    memset(dist,-1,sizeof(dist));
    
    f1(i,1,n+1)
    {
    	sort(edges[i].begin(),edges[i].end());
    }
    dist[x]=0;
    queue<int> q;
    q.push(x);

    while(!q.empty())
    {
    	int cur=q.front(); q.pop();
    	if(cur==y)
    	{
    		break;
    	}
    	f1(i,0,edges[cur].size())
    	{
    		if(dist[edges[cur][i]]==-1)
    		{
    			q.push(edges[cur][i]);
    			dist[edges[cur][i]]=dist[cur]+1;
    			parent[edges[cur][i]]=cur;
    		}
    	}
    }

    vector<int> ans;
    int cur=y;
    while(cur!=x)
    {
    	ans.pb(cur);
    	cur=parent[cur];
    }
    ans.pb(x);
    reverse(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    f1(i,0,ans.size())
    cout<<ans[i]<<gp;
    return 0;
}