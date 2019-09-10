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
int mem[100001][3];
int arr[100001][3];

int dp(int n, int s)
{
	if(n==1)
		return arr[n][s];
	if(n<=0)
		return mod;
	if(mem[n][s]!=-1)
		return mem[n][s];
	int best;
	if(s==0)
	best= arr[n][s]+max(dp(n-1,1),dp(n-1,2));
	if(s==1)
	best= arr[n][s]+max(dp(n-1,0),dp(n-1,2));
	if(s==2)
	best= arr[n][s]+max(dp(n-1,1),dp(n-1,0));
	mem[n][s]=best;
	return best;
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
    // int i;
    f1(i,1,n+1)
    cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    f1(i,0,100001)
    memset(mem[i],-1,sizeof(mem[i]));
    cout<<max({dp(n,0),dp(n,1),dp(n,2)});
    return 0;
}