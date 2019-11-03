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

    int n,k;
    cin>>n>>k;
    int a[n],b[n];
    f1(i,0,n)
    cin>>a[i];
    
    f1(i,0,n)
    b[i]=a[i];
    sort(b,b+n);
    int ans=0;
    vector<int> pp;
    f2(i,n-1,n-1-(k-1))
    {
    	ans+=b[i];
    	pp.pb(b[i]);
    }
    vector<int> pps;
    int zz=0;
    f1(i,0,n)
    {
    	zz++;
    	f1(j,0,k)
    	{
    		if(pp[j]==a[i])
    		{
    			pps.pb(zz);//cout<<zz<<gp<<pp[j]<<endl;
    			zz=0;
    			pp[j]=-1;
    			break;
    		}
    	}
    }
    int tt=0;
    cout<<ans<<endl;
    f1(i,0,pps.size())
    {
    	if(i!=pp.size()-1)
    	{
    		tt+=pps[i];
    		cout<<pps[i]<<gp;
    	}
    	else
    	{
    		tt+=pps[i];
    		cout<<pps[i]+n-(tt);
    	}
    }
    return 0;
}