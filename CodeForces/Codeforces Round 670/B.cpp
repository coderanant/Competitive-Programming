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

int a[100001];
int calc(int l, int r)
{
    int ans = 1;
    for(int i = l; i <= r; i++)
    ans *= a[i];
    return ans;
}
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
        for(int i = 0; i < n; i++)
        cin>>a[i];
        sort(a, a + n);
        int ans = max({calc(n - 5, n - 1), calc(0, 1) * calc(n - 3, n - 1), calc(0, 3) * calc(n - 1, n - 1)});
        cout<<ans<<endl;
    }
    return 0;
}