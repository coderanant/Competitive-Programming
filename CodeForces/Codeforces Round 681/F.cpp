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

const int mod = 998244353;
const ld PI = acosl(-1.0);
ll temp;

void solve()
{
    int n, k;
    cin>>n>>k;
    
    int a[n];
    f1(i, 0, n)
    cin>>a[i];
    int b[k];
    f1(i, 0, k)
    cin>>b[i];

    vector<pair<int, int>> aa(n + 1);
    f1(i, 0, n)
    {
        aa[a[i]].ff = aa[a[i]].ss = -1;
        if(i - 1 >= 0)
        aa[a[i]].ff = a[i - 1];
        if(i + 1 < n)
        aa[a[i]].ss = a[i + 1];
    }
    int bind[n + 1];
    memset(bind, 0, sizeof bind);
    f1(i, 0, k)
    bind[b[i]] = i + 1;

    int ans = 1;
    f1(i, 0, k)
    {
        int num = 0;
        if(aa[b[i]].ff != -1)
        {
            if(bind[aa[b[i]].ff] < bind[b[i]])
            {
                num++;
            }
        }

        if(aa[b[i]].ss != -1)
        {
            if(bind[aa[b[i]].ss] < bind[b[i]])
            num++;
        }

        ans *= num;
        ans %= mod;
    }

    cout<<ans<<endl;
    return ;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}