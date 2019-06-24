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
    int n,q;
    cin>>n>>q;
    int a[n];
    f1(i,0,n)
    cin>>a[i];
    deque<int> ap;
    f1(i,0,n)
    {
    	ap.pb(a[i]);
    }
    vector<pair<int,int>> ans;
    ans.pb(mp(0,0));
    f1(i,0,2*n)
    {
    	int a,b;
    	a=ap.front();
    	ap.pop_front();
    	b=ap.front();
    	ans.pb(mp(a,b));
    	ap.pop_front();
    	ap.push_back(min(a,b));
    	ap.push_front(max(a,b));
    }
    while(q--)
    {
    	int m;
    	cin>>m;
    	if(m<n)
    	{
    		cout<<ans[m].ff<<gp<<ans[m].ss<<endl;
    	}
    	else
    	{
    		m%=(n-1);
    		if(m==0)
    			m+=(n-1);
    		m+=(n-1);
    		cout<<ans[m].ff<<gp<<ans[m].ss<<endl;
    	}
    }
    return 0;
}