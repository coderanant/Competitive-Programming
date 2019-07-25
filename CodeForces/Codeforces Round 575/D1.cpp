/*coderanant*/
//Easier solution exists
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
    int q;
    cin>>q;
    while(q--)
    {
    	int n,k;
    	cin>>n>>k;
    	string com("RGB");
    //cout<<com;
    	string s;
    	cin>>s;
    	int dp1[n+1];
    	dp1[0]=0;
    	temp=0;
    	f1(i,0,n)
    	{
    		dp1[i+1]=dp1[i];
    		if(s[i]!=com[temp])
    			dp1[i+1]++;
    		temp++;
    		temp%=3;
    	}
    	int dp2[n+1];
    	dp2[0]=0;
    	temp=1;
    	f1(i,0,n)
    	{
    		dp2[i+1]=dp2[i];
	    	if(s[i]!=com[temp])
    			dp2[i+1]++;
    		temp++;
	    	temp%=3;
    	}
	    int dp3[n+1];
	    dp3[0]=0;
	    temp=2;
    	f1(i,0,n)
    	{
    		dp3[i+1]=dp3[i];
	    	if(s[i]!=com[temp])
    			dp3[i+1]++;
    		temp++;
    		temp%=3;
	    }
	    // f1(i,0,n)
	    // {
	    // 	cout<<dp1
	    // }
    	int ans1=mod,ans2=mod,ans3=mod;
    	f1(i,k,n+1)
    	{
    		ans1=min(ans1,dp1[i]-dp1[i-k]);
	    	ans2=min(ans2,dp2[i]-dp2[i-k]);
    		ans3=min(ans3,dp3[i]-dp3[i-k]);
    	}
    	cout<<min({ans1,ans2,ans3})<<endl;
    }

    return 0;
}