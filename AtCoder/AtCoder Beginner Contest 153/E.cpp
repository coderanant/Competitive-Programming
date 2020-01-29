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

int n;
int a[1001];
int b[1001];
int dp[10001];

int solve(int h)
{
	if(h<=0)
		return 0;
	if(dp[h]!=-1)
		return dp[h];

	int num=mod;
	f1(i,0,n)
	{
		num=min(num,solve(h-a[i])+b[i]);
	}
	dp[h]=num;
	return num;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // #ifndef ONLINE_JUDGE
    // 	freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    // 	freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    // #endif

    int h;
    cin>>h>>n;
    f1(i,0,n)
    {
    	cin>>a[i]>>b[i];
    }

    memset(dp,-1,sizeof(dp));
    cout<<solve(h);


    return 0;
}