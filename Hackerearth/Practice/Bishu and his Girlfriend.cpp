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
int temp;

vector<int> edge[1005];
int level[1005];
int gir[1005];

void dfs(int node,int leve)
{
	if(level[node]==-1)
	{
		level[node]=leve;
		int i;
		f1(i,0,edge[node].size())
		{
			dfs(edge[node][i], leve+1);
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
    int i;
    
    f1(i,0,n-1)
    {
    	int a,b;
    	cin>>a>>b;
    	edge[a].pb(b);
    	edge[b].pb(a);
    }

    memset(gir,0,sizeof(gir));
    int m;
    cin>>m;
    f1(i,0,m)
    {
    	cin>>temp;
    	gir[temp]=1;
    }

    memset(level,-1,sizeof(level));
    dfs(1,0);

    int ans=mod;
    int sum=0;
    f1(i,1,n+1)
    {
    	if(level[i]<ans&&gir[i]==1)
    	{
    		ans=level[i];
    		sum=i;
    	}
    }
    cout<<sum<<endl;
    return 0;
}