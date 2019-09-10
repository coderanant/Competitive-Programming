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

int n,w;
int value[101],weight[101];

int dd[101][100001];
int dp(int ind, int val)
{
	if(val==0)
		return 0;
	if(ind==n)
		return 1e15L;
	if(val<0)
		return 1e15L;
	if(dd[ind][val]!=1e16L)
		return dd[ind][val];
	int best=min(dp(ind+1,val),weight[ind]+dp(ind+1,val-value[ind]));
	dd[ind][val]=best;
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

    cin>>n>>w;
    int i;
    f1(i,0,n)
    cin>>weight[i]>>value[i];
    int ans=0;
    f1(i,0,101)
    {
    	for(int j=0;j<100001;j++)
    		dd[i][j]=1e16L;
    }
    f1(i,0,100000+1)
    {
    	int minw=dp(0,i);
    	if(minw<=w)
    		ans=i;
    }
    cout<<ans;

    return 0;
}