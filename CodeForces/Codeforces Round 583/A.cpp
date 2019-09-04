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
    int n;
    cin>>n;
    int d,e;
    cin>>d>>e;
    vector<int> x,y;
   // x.pb(0*d);
    x.pb(1*d);
    x.pb(2*d);
    x.pb(5*d);
    x.pb(10*d);
    x.pb(20*d);
    x.pb(50*d);
    x.pb(100*d);
   // y.pb(0*e);
    y.pb(5*e);
    y.pb(10*e);
    y.pb(20*e);
    y.pb(50*e);
    y.pb(100*e);
    y.pb(200*e);
    int ans=mod;
    f1(j,0,x.size())
    {
    	int k;
    	f1(k,0,y.size())
    	{
    		f1(i,0,100000001)
    		{
    			temp=(x[j]*i);
    			if(temp>n)
    				break;
    			temp=n-temp;
    			temp/=y[k];
    			ans=min(ans,n-(i*x[j]+temp*y[k]));
    		}
    	}
    }
    cout<<ans;
    return 0;
}