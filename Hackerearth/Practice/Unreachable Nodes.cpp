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

int n,m;
vector<int> ed[100001];
int visit[100001];

void dfs(int node)
{
	visit[node]=1;
	int i;
	f1(i,0,ed[node].size())
	{
		if(visit[ed[node][i]]==0)
		{
			dfs(ed[node][i]);
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

    cin>>n>>m;
    int i;
    f1(i,0,m)
    {
    	int a,b;
    	cin>>a>>b;
    	ed[a].pb(b);
    	ed[b].pb(a);
    }

    int head;
    cin>>head;
    dfs(head);
    int ans=0;
    f1(i,1,n+1)
    {
    	if(visit[i]==0)
    		ans++;
    }
    cout<<ans<<endl;
    return 0;
}