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

int n;
vector<pair<int,int>> ed[100005];

int disnode(int node)
{
    int weight[n+1];
    memset(weight,-1,sizeof(weight));
    queue<int> q;
    //weight[1]=0;

    q.push(node);
    weight[node]=0;
    while(!q.empty())
    {
        int cur = q.front(); q.pop();

        for(int i=0;i<ed[cur].size();i++)
        {
            if(weight[ed[cur][i].ff]==-1)
            {
                weight[ed[cur][i].ff]=weight[cur]+ed[cur][i].ss;
                q.push(ed[cur][i].ff);
            }
        }
    }
    int ans=0,ansi=0,i;
    f1(i,0,n+1)
    {
        if(weight[i]>ans)
        {
            ans=weight[i];
            ansi=i;
        }
    }
    return ansi;
}

int bfs(int node)
{
	int weight[n+1];
	memset(weight,-1,sizeof(weight));
	queue<int> q;
	//weight[1]=0;

	q.push(node);
	weight[node]=0;
	while(!q.empty())
	{
		int cur = q.front(); q.pop();

		for(int i=0;i<ed[cur].size();i++)
		{
			if(weight[ed[cur][i].ff]==-1)
			{
				weight[ed[cur][i].ff]=weight[cur]+ed[cur][i].ss;
				q.push(ed[cur][i].ff);
			}
		}
	}
	int ans=0,i;
	f1(i,0,n+1)
	{
        ans=max(ans,weight[i]);
    }
	return ans;
}

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

   		cin>>n;
   		//vector<pair<int,int>> ed;
        int i;
   		f1(i,0,n-1)
   		{
   			int a,b,c;
   			cin>>a>>b>>c;
   			ed[a].pb(mp(b,c));
   			ed[b].pb(mp(a,c));
   		}

        int dis_node = disnode(1);
        //cout<<dis_node<<endl;

        int ans = bfs(dis_node);

        if(ans<=100)
        {
            cout<<0<<gp<<ans<<endl;
        }
        else if(ans<=1000)
            cout<<100<<gp<<ans<<endl;
        else if(ans<=10000)
            cout<<1000<<gp<<ans<<endl;
        else 
            cout<<10000<<gp<<ans<<endl;

   		f1(i,1,n+1)
        ed[i].clear();
   	}
    
    return 0;
}