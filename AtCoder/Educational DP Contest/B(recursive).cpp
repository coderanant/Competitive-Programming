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

int k;
int h[100001];
int mem[100001];
int dp(int n)
{
	if(n<=0)
		return mod;
	else if (n==1)
		return 0;
	else if(mem[n]!=-1)
		return mem[n];
	int best=mod;
	int i;
	for(int i=1;i<=k;i++)
	{
		if(n-i>0)
		{
			best=min(best,dp(n-i)+abs(h[n]-h[n-i]));
		}
	}
	mem[n]=best;
	return best;
}int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // 	freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    // 	freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    // #endif
    int n;
    cin>>n>>k;
    int i;
    f1(i,1,n+1)
    cin>>h[i];
    memset(mem,-1,sizeof(mem));
    cout<<dp(n);
    return 0;
}