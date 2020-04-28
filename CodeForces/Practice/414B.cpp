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
    
    int n, m;
    cin>>n>>m;

    int a[m+1][n+1];
    f1(i,0,m+1) f1(j,0,n+1) a[i][j] = 0;
    f1(i,1,n+1)
    a[1][i] = 1;

    vector<int> fact[n+1];
    f1(i,1,n+1)
    {
        for(int k = 1; k*k <= i; k++)
        {
            if(i%k == 0)
            {
                fact[i].pb(k);
                if(i/k != k)
                    fact[i].pb(i/k);
            }
        }
    }

    f1(i,2,m+1)
    {
        f1(j,1,n+1)
        {
            f1(k,0,fact[j].size())
            {
                a[i][j] += a[i-1][fact[j][k]];
                a[i][j] %= mod;
            }
        }
    }
    int ans = 0;
    f1(i,1,n+1)
    ans += a[m][i];
    ans %= mod;
    cout<<ans<<endl;
    return 0;
}