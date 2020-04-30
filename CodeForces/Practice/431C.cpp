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
int n, k, d;
int dp[101][2];
int solve(int num, int is)
{
    if(dp[num][is] != -1)
    return dp[num][is];
    
    if(num == 0)
    {
        if(is == 0)
        return 1;
        else
        return 0;
    }
    
    int ans = 0;
    if(is == 0)
    {
        f2(i, num-1, max(0ll, num-(d-1)) )
        {
            ans += solve(i, 0);
            ans %= mod;
        }
    }
    else
    {
        f2(i,num-1,max(0ll, num-(d-1)) )
        {
            ans += solve(i, 1);
            ans %= mod;
        }
        f2(i, num-d, max((num - k) , 0ll) )
        {
            ans += (solve(i, 1) + solve(i, 0)); 
            ans %= mod;
        }
    }
    return dp[num][is] = ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>k>>d;

    memset(dp, -1, sizeof dp);

    cout<<solve(n, 1);
    return 0;
}