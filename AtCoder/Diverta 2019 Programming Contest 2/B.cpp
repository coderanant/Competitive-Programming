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
vector<pair<int,int>> a;

int checker(int p,int q)
{
	map<pair<int,int>, int> ap;
	int i;
	f1(i,0,n)
	{
		ap.insert(mp(a[i],1));
	}
	int ans=0;
	f1(i,0,n)
	{
		if(ap.find(mp(a[i].ff-p,a[i].ss-q))!=ap.end())
		{
			ans++;
		}
		//cout<<ans<<endl;
	}
	return n-ans;

}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // 	freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    // 	freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    // #endif
    cin>>n;
    int i,j;
    f1(i,0,n)
    {
    	cin>>j>>temp;
    	a.pb(mp(j,temp));
    }
    int maxans=mod;
    f1(i,0,n)
    {
    	f1(j,0,n)
    	{
    		if(i!=j)
    		{
    			int p=a[i].ff-a[j].ff;
    			int q=a[i].ss-a[j].ss;
    			maxans=min(maxans,checker(p,q));
    		}
    	}
    }
    if(n==1)
    {
    	cout<<1;
    	return 0;
    }
    cout<<maxans;
    return 0;
}