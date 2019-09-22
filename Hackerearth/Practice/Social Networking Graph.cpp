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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    	freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    	freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    #endif

    int n,e;
    cin>>n>>e;

    vector<int> edge[n+1];
    int i;
    f1(i,0,e)
    {
    	int ed1,ed2;
    	cin>>ed1>>ed2;
    	edge[ed1].pb(ed2);
    	edge[ed2].pb(ed1);
    }

    int q;
    cin>>q;
    while(q--)
    {
    	int s,d;
    	cin>>s>>d;
    	int dist[n+1];
    	memset(dist,-1,sizeof(dist));
    	dist[s]=0;
    	queue<int> q;
    	q.push(s);
    	int ans=0;
    	while(!q.empty())
    	{
    		int cur=q.front(); q.pop();

    		if(dist[cur]==d)
    		{
    			ans++;
    		}
    		else if(dist[cur]>d)
    			break;
    		f1(i,0,edge[cur].size())
    		{
    			if(dist[edge[cur][i]]==-1)
    			{
    				dist[edge[cur][i]]=dist[cur]+1;
    				q.push(edge[cur][i]);
    			}
    		}
    	}
    	cout<<ans<<endl;
    }

    return 0;
}