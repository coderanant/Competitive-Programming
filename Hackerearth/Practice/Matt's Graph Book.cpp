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

int n,x;
vector<int> ed[100001];
int vis[100001];

void dfs(int node)
{
	if(vis[node]==1||node==x)
		return ;
	vis[node]=1;
	f1(i,0,ed[node].size())
	{
		dfs(ed[node][i]);
	}
	return;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    	freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    	freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    #endif

    int k;
    cin>>n>>k;
    f1(i,0,k)
    {
    	int a,b;
    	cin>>a>>b;
    	ed[a].pb(b);
    	ed[b].pb(a);
    }
    cin>>x;

    memset(vis,0,sizeof(vis));
    if(x!=0)
    	dfs(0);
	else if(n>1)
		dfs(1);
    vis[x]=1;
    f1(i,0,n)
    {
    	if(vis[i]!=1)
    	{
    		cout<<"Not Connected"<<endl;
    		return 0;
    	}
    }
    cout<<"Connected";
    return 0;
}