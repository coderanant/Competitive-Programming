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

int mul(int a, int b, int c)
{
    a = a*b/__gcd(a, b);
    a = a*c/__gcd(a, c);
    return a;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int ans = 1;
    f1(i, max(1ll, n-50), n+1)
    {
        f1(j, max(1ll, n-50), n+1)
        {
            f1(k, max(1ll, n-50), n+1)
            {
                ans = max(ans, mul(i, j, k));
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}