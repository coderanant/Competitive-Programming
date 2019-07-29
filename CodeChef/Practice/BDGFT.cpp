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
    	string s;
    	cin>>s;
    	n=s.size();
    	int dp[n+1];
    	dp[0]=0;
    	for(int i=0;i<n;i++)
    	{
    		dp[i+1]=dp[i];
    		if(s[i]=='1')
    		{
    			dp[i+1]++;
    		}
    	}
    	int ans=0;
    	//cout<<n<<endl;
    	for(int i=1;i*i+i<=n;i++)
    	{
    		for(int j=0;j<=n-(i*i+i);j++)
    		{
    			if(dp[j+i*i+i]-dp[j]==i)
    			{
    				ans++;
    				//cout<<j<<gp<<j+i<<endl;
    			}
    		}
    	}
    	cout<<ans<<endl;
    }

    return 0;
}