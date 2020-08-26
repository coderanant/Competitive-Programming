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
#define ld long double

const int mod = 1000000007;
const ld PI = acosl(-1.0);
ll temp;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n + 1];
        f1(i, 1, n + 1)
        cin>>a[i];

        int dp[n + 1][n + 1];
        memset(dp, 0, sizeof dp);
        f1(i, 1, n + 1)
        {
            f1(j, i + 1, n + 1)
            {
                if(a[i] == a[j])
                dp[i][j]++;
            }
        }
        f1(i, 1, n + 1)
        {
            f1(j, 1, n + 1)
            {
                dp[i][j] = dp[i][j] + dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
            }
        }
        int ans = 0;
        f1(i, 1, n - 2)
        {
            f1(j, i + 1, n)
            {
                if(a[i] == a[j])
                {
                    ans += dp[j - 1][n] - dp[i][n] - dp[j - 1][j] + dp[i][j];
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}