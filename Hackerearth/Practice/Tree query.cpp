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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    	freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    	freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    #endif

    int n,m;
    cin>>n>>m;

    vector<int> edge[n+1];
    f1(i,0,m)
    {
    	int a,b;
    	cin>>a>>b;
    	edge[a].pb(b);
    }
    int ans1=0;
    f1(i,1,n+1)
    {
    	if(edge[i].size()==0)
    		ans1++;
    }
    vector<int> edger[n+1];
    f1(i,1,n+1)
    {
    	f1(j,0,edge[i].size())
    	{
    		edger[edge[i][j]].pb(i);
    	}
    }
    int ans2=0;
    f1(i,1,n+1)
    {
    	if(edger[i].size()==0)
    		ans2++;
    }
    cout<<max(ans1,ans2);
    return 0;
}