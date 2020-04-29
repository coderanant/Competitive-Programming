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

const int mod=100000000;
ll temp;
int dp[101][101][11][11];
int k1, k2;
int solve( int n1, int n2, int f, int h)
{
    if (dp[n1][n2][f][h] != -1)
        return dp[n1][n2][f][h];
    int ans = 0;
    if(n1 + n2 == 0)
    return dp[n1][n2][f][h] = 1;
    
    if(n1 > 0 && f > 0)
    ans += solve(n1-1, n2, f-1, k2);
    if(n2 > 0 && h > 0)
    ans += solve(n1, n2-1, k1, h-1);
    ans %= mod;
    dp[n1][n2][f][h] = ans;
    return ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n1, n2;
    cin>>n1>>n2>>k1>>k2;
    memset(dp, -1, sizeof(dp));
    cout<<solve(n1, n2, k1, k2);
    return 0;
}