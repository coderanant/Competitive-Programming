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
    int n; cin>>n;
    int arr[n][3];
    int i;
    f1(i,0,n)
    	cin>>arr[i][0]>>arr[i][1]>>arr[i][2];

    int dp[n][3];
    dp[0][0]=arr[0][0];
    dp[0][1]=arr[0][1];
    dp[0][2]=arr[0][2];
    f1(i,1,n)
    {
    	dp[i][0]=arr[i][0]+max(dp[i-1][1],dp[i-1][2]);
    	dp[i][1]=arr[i][1]+max(dp[i-1][0],dp[i-1][2]);
    	dp[i][2]=arr[i][2]+max(dp[i-1][0],dp[i-1][1]);
    }
    cout<<max({dp[n-1][0],dp[n-1][1],dp[n-1][2]});
    return 0;
}