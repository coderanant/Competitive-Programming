/*coderanant*/
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=1346
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define f1(i,a,b) for(int i=a;i<b;i++)
#define f2(i,a,b) for(int i=a;i>=b;i--)
// #define endl '\n'
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

    string a, b;
    while(1)
    {
        if(cin.eof())
        break;
        getline(cin, a);
        if(cin.eof())
        break;
        getline(cin, b);
        int n = a.size(), m = b.size();
        a = '/' + a;
        b = '/' + b;
        int dp[n + 1][m + 1];
        f1(i,0,n+1)
        dp[i][0] = 0;
        f1(i,0,m+1)
        dp[0][i] = 0;

        f1(i,1,n + 1)
        {
            f1(j,1,m + 1)
            {
                if(a[i] == b[j])
                dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        cout<<dp[n][m]<<endl;
    }
    return 0;
}