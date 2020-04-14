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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, k;
    cin>>n>>m>>k;
    
    int a[n+1];
    f1(i,1,n+1)
    cin>>a[i];

    int pref[n+1];
    pref[0] = 0;
    f1(i,1,n+1)
    pref[i] = pref[i-1] + a[i];

    // f1(i,0,n+1)
    // cout<<pref[i]<<gp;
    // cout<<endl;
    int dp[k+1][n+1];
    f1(i,0,k+1)
    {
        f1(j,0,n+1)
        dp[i][j] = 0;
    }
    
    f1(i,1,k+1)
    {
        f1(j,m*i,n+1)
        {
            dp[i][j] = max(dp[i-1][j-m] + pref[j] - pref[j-m], dp[i][j-1]);
        }
    }

    cout<<dp[k][n]<<endl;
    return 0;
}