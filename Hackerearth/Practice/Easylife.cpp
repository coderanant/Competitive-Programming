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
int n,m;
vector<int> arr[100000+1];
int vis[100000+1];

void dfs(int node, int num)
{
	if(vis[node]!=0)
		return;
	vis[node]=num;
	f1(i,0,arr[node].size())
	{
		dfs(arr[node][i],num);
	}
	return ;
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
    f1(i,0,m)
    {
    	int a,b;
    	cin>>a>>b;
    	arr[a].pb(b);
    	arr[b].pb(a);
    }
    memset(vis,0,sizeof(vis));
    temp=1;
    f1(i,1,n+1)
    {
    	if(vis[i]==0)
    	{
    		dfs(i,temp);
    	}
    	temp++;
    }
    int node[temp+1];
    int edge[temp+1];
    memset(node,0,sizeof(node));
    memset(edge,0,sizeof(edge));
    f1(i,1,n+1)
    {
    	node[vis[i]]++;
    	edge[vis[i]]+=arr[i].size();
    }
    int a=0,b=1;
    double tt=-1.000;
    f1(i,1,temp+1)
    {
    	if(double(edge[i]/2.00)/node[i]>tt)
    	{
    		tt=double(edge[i]/2.00)/node[i];
    		a=edge[i]/2;
    		b=node[i];
    	}
    }

    temp=__gcd(a,b);
    a/=temp;
    b/=temp;
    if(a>b)
    	cout<<">1";
    else
    	cout<<a<<'/'<<b;

    return 0;
}