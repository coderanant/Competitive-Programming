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
    int n;
    cin>>n;
    int a[n];
    f1(i,0,n)
    cin>>a[i];

    int ans = a[n-1] * a[n-2] / __gcd(a[n-1], a[n-2]), gc = __gcd(a[n-1], a[n-2]);

    f2(i,n-3,0)
    {
        ans = __gcd(ans, a[i] * gc / __gcd(a[i], gc));
        gc = __gcd(gc, a[i]);
    }
    cout<<ans<<endl;
    return 0;
}