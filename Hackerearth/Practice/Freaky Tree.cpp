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
    	int n;
    	cin>>n;
    	vector<pair<int,int>> ed[n+1];
    	f1(i,0,n-1)
    	{
    		int a,b,c;
    		cin>>a>>b>>c;
    		ed[a].pb(mp(b,c));
    		ed[b].pb(mp(a,c));
    	}

    	int xo[n+1];
    	memset(xo,-1,sizeof(xo));

    	xo[1]=0;
    	queue<int> q;
    	q.push(1);
    	while(!q.empty())
    	{
    		int cur=q.front(); q.pop();

    		f1(i,0,ed[cur].size())
    		{
    			if(xo[ed[cur][i].ff]==-1)
    			{
    				xo[ed[cur][i].ff]=xo[cur]^ed[cur][i].ss;
    				q.push(ed[cur][i].ff);
    			}
    		}
    	}

    	int ans=0;
    	f1(i,0,n+1)
    	{
    		if(xo[i]==1&&ed[i].size()==1)
    			ans++;
    	}
    	cout<<ans<<endl;

    }
    return 0;
}