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

void solve()
{
    int n;
    cin>>n;
    int a[n], mx = 0;
    f1(i, 0, n)
    {
        cin>>a[i];
        mx = max(mx, a[i]);
    }
    int ans = -1;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == mx)
        {
            if((i - 1 >= 0 && a[i - 1] < mx) || (i + 1 < n && a[i + 1] < mx))
            {
                ans = i + 1;
            }
        }
    }
    cout<<ans<<endl;
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