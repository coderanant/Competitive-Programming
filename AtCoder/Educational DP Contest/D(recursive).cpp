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

int weight[101],value[101],n,w;
int cc[100001][101];
int dp(int wei, int ind)
{
	if(wei>w)
		return -1e15;
	if(ind>=n)
		return 0;
	if(cc[wei][ind]!=-1)
		return cc[wei][ind];
	int best=max(dp(wei,ind+1),dp(wei+weight[ind],ind+1)+value[ind]);
	cc[wei][ind]=best;
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
    memset(cc,-1,sizeof(cc));
    f1(i,0,n)
    cin>>weight[i]>>value[i];
    cout<<dp(0,0);

    return 0;
}