/*coderanant*/
//not done

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
int a[100001];
int memo[100001];
int dp(int n)
{
	if(n<1)
		return mod;
	if(n==1)
		return 0;
	if(memo[n]!=-1)
        return memo[n];
    memo[n]=min(dp(n-1)+abs(a[n-1]-a[n]),dp(n-2)+abs(a[n-2]-a[n]));
    return memo[n];
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // 	freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    // 	freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    // #endif
    int n;
    cin>>n;
    int i;
    memset(memo,-1,sizeof(memo));
    f1(i,1,n+1)
    cin>>a[i];
    cout<<dp(n);
    return 0;
}