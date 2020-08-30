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
    int n;
    cin>>n;
    int a[n];
    f1(i, 0, n)
    cin>>a[i];

    int suf[n];
    suf[n - 1] = a[n - 1];
    f2(i, n - 2, 0)
    {
        suf[i] = suf[i + 1] + a[i];
        suf[i] %= mod;
    }
    int ans = 0;
    f1(i, 0, n - 1)
    {
        ans += (a[i] * suf[i + 1]) % mod;
        ans %= mod;
    }
    cout<<ans<<endl;
    return 0;
}