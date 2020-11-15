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
        vector<pair<int, int>> a(n);
        f1(i, 0, n)
        {
            cin>>a[i].ff;
        }
        f1(i, 0, n)
        cin>>a[i].ss;
        sort(a.begin(), a.end());

        int sum = 0;
        int ans = a[n - 1].ff;
        f2(i, n - 1, 1)
        {
            sum += a[i].ss;
            ans = min(ans, max(a[i - 1].ff, sum));
        }
        sum += a[0].ss;
        ans = min(ans, sum);
        cout<<ans<<endl;
    }
    return 0;
}