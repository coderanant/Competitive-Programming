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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // 	freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    // 	freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    // #endif
    int n,w;
    cin>>n>>w;
    vector<int> dp(w+1,0ll);
    int i;
    f1(i,0,n)
    {
    	int weight,value;
    	cin>>weight>>value;
    	int j;
    	for(int j=w-weight; j>=0; j--)
    	{
    		dp[j+weight]=max(dp[j+weight],dp[j]+value);
    	}
    	// f1(j,0,w+1)
    	// cout<<dp[j]<<gp;
    	// cout<<endl;
    }
    int ans=0ll;
    f1(i,0,w+1)
    {
    	ans=max(ans,dp[i]);
    }
    
    cout<<ans<<endl;
    return 0;
}